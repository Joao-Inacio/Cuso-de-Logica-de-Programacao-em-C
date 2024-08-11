// 2. Elabore um programa que leia o custo (valor inteiro em reais) de uma hora de trabalho de um profissional e o tempo que ele trabalhou. Em seguida, calcule o valor total que ele deve receber e apresente essa informação na tela.
#include <stdio.h>



int main(){
	int valor_trabalho, tempo_trabalho, soma_valor;

	printf("Digite o valor de horas de trabalho: ");
	scanf("%d", &valor_trabalho);

	printf("Digite o tempo de trabalho: ");
	scanf("%d", &tempo_trabalho);

    soma_valor = valor_trabalho * tempo_trabalho;
    
	printf("Voce deve receber R$%d", valor_trabalho * tempo_trabalho);

	getchar();
}

