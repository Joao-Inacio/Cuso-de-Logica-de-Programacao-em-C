// 10. Faça um programa que leia um numero inteiro positivo de três dígitos 
// (de 100 a 999). Gere outro numero formado pelos dígitos invertidos do
// numero lido. Exemplo: número lido: 123 e o resultado invertido deve ser 321.
#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        
        centena = numero / 100;  // Extraindo a centena
        dezena = (numero / 10) % 10;  // Extraindo a dezena
        unidade = numero % 10;  // Extraindo a unidade

        printf("O numero: %d\n", numero);
        printf("Invertido fica: %d%d%d", unidade, dezena, centena);

    } else {
        printf("Numero invalido\n");
    }

}
