// 6. Escreva um programa que leia um número inteiro maior do que zero e dentro do intervalo entre 100 e 999. 
// Em seguida, informe a soma de todos os seus algarismos. Por exemplo, você digitou 135, então o resultado
// da soma deve ser 1 + 3 + 5 = 9. Se o número lido não for maior do que zero, o programa terminará 
// com a mensagem "Número inválido"
#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, soma;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        centena = numero / 100;  // Extraindo a centena
        dezena = (numero / 10) % 10;  // Extraindo a dezena
        unidade = numero % 10;  // Extraindo a unidade

        soma = centena + dezena + unidade;

        printf("Centena: %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);
        printf("A soma dos algarismos: %d\n", soma);
    } else {
        printf("Numero invalido\n");
    }

}
