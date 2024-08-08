#include <stdio.h>

int main()
{
    int contado, valor, soma;

    contado = 5;
    soma = 0;

    while (contado >= 1)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma = soma + valor;
        contado--;
    }
    printf("O valor: %d", soma);
}