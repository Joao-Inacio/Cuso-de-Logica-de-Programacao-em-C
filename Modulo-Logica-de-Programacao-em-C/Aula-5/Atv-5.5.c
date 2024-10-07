// 5. Elabore um programa para receber dois números e mostrar o resultado da multiplicação entre eles.
#include <stdio.h>

int main(){
    int num1, num2, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    multiplicacao = num1 * num2;
    printf("A multiplicacao de %d X %d = %d", num1, num2, multiplicacao);

}

