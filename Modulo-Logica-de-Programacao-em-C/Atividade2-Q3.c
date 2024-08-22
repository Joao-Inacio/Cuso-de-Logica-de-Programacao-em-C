// 3. Elabore um programa que leia uma certa quantidade de números e imprima o maior deles e quantas vezes o 
// maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário. 
// Utilize o laço de sua escolha para solucionar esse problema.
#include <stdio.h>

int main(){
    int numero, i, numero_maior, contador, vezes;
    numero_maior = 0;
    contador = 0;
    vezes = 0;
    printf("Quantidade de numeros a sere digitado: ");
    scanf("%d", &vezes);
    for (i = 1; i <=vezes; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
         if (numero > numero_maior) {
            numero_maior = numero;
            contador = 1;  
        } else if (numero == numero_maior) {
            contador++; 
        }
        
    }
    printf("O numero maior = %d\n", numero_maior);
    printf("Apareceu = %d", contador);
    
}