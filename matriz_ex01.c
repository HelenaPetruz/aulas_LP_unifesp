#include <stdio.h>

int main(){
    int m[3][4];
    int v[3];
    int soma=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Digite um valor para m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            v[i]+=m[i][j];
        }
        soma += v[i];
    }

    printf("MATRIZ:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("VETOR:\n");
    for(int i=0; i<3; i++){
        printf("%d\t", v[i]);
    }

    printf("\nSoma dos valores do vetor: %d", soma);
    
}