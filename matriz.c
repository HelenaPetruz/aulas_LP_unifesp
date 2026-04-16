#include <stdio.h>

int main(){
    int a[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite um valor para A[%d][%d] = ", i, j); 
            //não tem & no print pois estamos passando pra função o valor da variavel
            scanf("%d", &a[i][j]);
            //tem & no scanf pois estamos passando o endereço de memoria da variavel, para q seja possivel modificá-la
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int busca;
    int cont = 0;
    printf("Digite um valor para ser buscado na matriz: ");
    scanf("%d", &busca);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j] == busca){
                printf("Valor encontrado: a[%d][%d]=%d", i, j, busca);
                cont = 1;
                break; //quebra apenas esse for
            }
        }
        if(cont==1){
            break; //quebra o segundo for
        }
        printf("\n");
    }
    if(cont == 0){
        printf("Valor não encontrado!");
    }
    
}