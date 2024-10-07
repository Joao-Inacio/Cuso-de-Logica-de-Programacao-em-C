// 6. Elabore um programa para receber dois números e mostrar o resultado da subtração entre o primeiro e o segundo número digitado.
#include <stdio.h>

int main(){
    int num1, num2, subtracao;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    subtracao = num1 - num2;
    printf("A subtracao de %d - %d = %d", num1, num2, subtracao);
}
