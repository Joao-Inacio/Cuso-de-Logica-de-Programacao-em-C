// Introdução a Vetores
#include <stdio.h>

int main(){
    int vetor[5];
    int pos;

    for (pos = 4; pos >= 0; pos--){
        printf("Digite %d numero: ", pos + 1);
        scanf("%d", &vetor[pos]);

    }
    for (pos = 4; pos >= 0; pos--){
        printf("Posicao %d = %d\n", pos, vetor[pos]);
    }
}
