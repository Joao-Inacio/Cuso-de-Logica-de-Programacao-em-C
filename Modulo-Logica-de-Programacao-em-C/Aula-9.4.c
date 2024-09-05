#include <stdio.h>

// Faça um função que receba uma temperatura em graus Celsius e retorne a temperatura em graus Fahrenheit. A fórmula de conversão é: F = C * (9/5) + 32.

float conversor(float celsius){
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main(){
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = conversor(celsius);
    printf("A temperatura em Fahrenheit: %.2f\n", fahrenheit);

}

