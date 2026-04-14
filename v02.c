#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vet[128], busca;
    bool achei = false;

    srand(time(NULL));

    for(int i=0; i<128; i++){
        vet[i] = rand()%100; 
        //funcao rand gera n° aleatórios
        //pega apenas o resto da divisão por 100 (sempre entre 0 e 99)

        printf("%d, ", vet[i]);
        //scanf("%d", &vet[i]);
    }

    printf("\nBusca: ");
    scanf("%d", &busca);

    for(int i=0; i<128; i++){
        if(vet[i] == busca){
            printf("Encontrado: vet[%d]=%d", i, busca);
            achei = true;
            break; //quebra o laço de repetição
        }
    }

    if(!achei){
        printf("Valor não encontrado!");
    }

}