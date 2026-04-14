#include <stdio.h>

int main(){
    int R[10], S[10], X[20], Y[10];
    int somaR=0, somaS=0;

    for(int i=0; i<10; i++){
        printf("Digite valor para R[%d]", i);
        scanf("%d", &R[i]);
    }

    for(int i=0; i<10; i++){
        printf("Digite valor para S[%d]", i);
        scanf("%d", &S[i]);
    }

    for(int i=0; i<10;i++){
        somaR += R[i];
        somaS += S[i];
    }
    printf("\nSoma dos elementos de R: %d", somaR);
    printf("\nSoma dos elementos de S: %d", somaS);

    for(int i=0; i<10; i++){
        X[i]= R[i];
        X[10+i]=S[i];
    }
    printf("\nX: ");
    for(int i=0; i<20; i++){
        printf("\nX[%d] = %d", i, X[i]);
    }

    for(int i=0; i<10; i++){
        Y[i]= R[i]*S[i];
    }

}