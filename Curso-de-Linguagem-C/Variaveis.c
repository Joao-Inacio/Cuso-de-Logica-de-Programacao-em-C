#include <stdio.h>

#define texto "Entrada"

int main(){
	printf("Digite a %s\n", texto);
	char nome[50] = "";
	printf("Nome: ");
	scanf("%s", nome);
	printf("Seu nome é %s", nome);
}

