// 5. Faça um programa que lê 10 números para um vetor. Em seguida, mostre a quantidade de 
// números positivos e negativos que foram digitados pelo usuário.
#include <stdio.h>

int main() {
    int vetor[10], i, negativos, positivos;
    
    negativos = 0;
    positivos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0) {
            negativos++;
        } else if (vetor[i] > 0) {
            positivos++;
        }
    }

    printf("Total de numeros positivos = %d\n", positivos);
    printf("Total de numeros negativos = %d\n", negativos);
}

