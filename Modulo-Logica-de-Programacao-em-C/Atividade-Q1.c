// 1. Elabore um programa para ler o preço de um produto e a quantidade comprada. Calcule o preço total a ser pago e informe o valor na tela.
#include <stdio.h>


int main(){
    float preco, quantidade, soma_total;
    printf("Digite o preco: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);

    soma_total = preco * quantidade;

    printf("O valor total de %.1f Produto e = R$%.2f\n", quantidade, soma_total);

}
