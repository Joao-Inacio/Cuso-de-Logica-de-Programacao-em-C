// 2. Elabore um programa que leia 12 números e imprima o maior deles e quantas vezes o maior número foi lido. 
// Use o laço for para solucionar esse problema.
#include <stdio.h>

int main(){
    int numero, i, numero_maior, contador;
    numero_maior = 0;
    contador = 0;
    for (i = 1; i <=12; i++){
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
