#include <stdio.h>

int main(){
	 unsigned int opcao;
	 float numero1, numero2;
	 printf(
	 	"Escolha a opcao\n"
	 	"1 - Soma de 2 numero\n"
	 	"2 - Diferenca entre 2 numero\n"
	 	"3 - Produto entre 2 numero\n"
	 	"4 - Divisao entre 2 numero\n"
	 	"Escolha a opcao: "
	);
	scanf("%d", &opcao);
	if (opcao >= 1 && opcao <= 4){
		
		printf("Digite o primeiro numero: ");
		scanf("%f", &numero1);
		
		printf("Digite o segundo numero: ");
		scanf("%f", &numero2);
		switch(opcao){
			case 1 : 
				printf("A soma de %f + %f = %f", numero1, numero2, numero1 + numero2);
				break;
			case 2 : 
				printf("A Diferenca de %f - %f = %f", numero1, numero2, numero1 - numero2);
				break;
			case 3 : 
				printf("O Produto de %f X %f = %f", numero1, numero2, numero1 * numero2);
				break;
			case 4 :
				if (numero1 != 0 && numero2 != 0){
					printf("A Divisao de %f & %f = %f", numero1, numero2, numero1 / numero2);
				}
				else{
					printf("Não é possivel dividir por 0");
				}
				break;
		}
	}
	else {
		printf("Opcao Invalida");
	}
	
}

