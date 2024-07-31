#include <stdio.h>



int main(){
	int valor_trabalho = 0;
	int tempo_trabalho = 0;
	printf("Digite o valor de horas de trabalho: ");
	scanf("%d", &valor_trabalho);
	printf("Digite o tempo de trabalho: ");
	scanf("%d", &tempo_trabalho);
	printf("Valor total por horas trabalhada: %d", valor_trabalho * tempo_trabalho);

	getchar();
}

