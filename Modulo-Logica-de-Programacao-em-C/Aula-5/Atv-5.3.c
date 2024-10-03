// 3. Elabore um programa para ler um número digitado, mostrar seu valor, seu antecessor e o seu sucessor.
#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("\nO numero digitado foi %d", numero);
    printf("\nE seu sucessor  %d", numero + 1);
    printf("\nE seu antecessor  %d", numero - 1);
}
