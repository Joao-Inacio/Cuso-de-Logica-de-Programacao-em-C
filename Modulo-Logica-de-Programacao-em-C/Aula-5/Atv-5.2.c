// 2. Elabore um programa para ler um número digitado, mostrar o seu valor e o seu sucessor.
#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("\nO numero digitado foi %d", numero);
    printf("\nE seu sucessor  %d", numero + 1);
}
