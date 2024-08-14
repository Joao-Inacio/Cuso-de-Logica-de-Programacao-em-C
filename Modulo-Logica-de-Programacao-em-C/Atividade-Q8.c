// 8. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de
// imposto sobre o produto (MG - 7%; SP - 12%; RJ - 15%; MS - 8%). 
// Faça um programa em que o usuário entre com o valor e o estado destino do produto. O programa 
// deve retornar o preço final do produto acrescido do imposto do estado em que ele será vendido. 
// Se o estado digitado não for válido, mostrar uma mensagem de erro.

#include <stdio.h>


int main(){
    float preco, preco_imposto;
    int opcao;
    opcao = 0;

    printf(
        "Digite o estado de destino: \n"
        "1 - (MG) Minas Gerais\n"
        "2 - (SP) Sao Paulo\n"
        "3 - (RJ) Rio de Janeiro\n"
        "4 - (MS) Mato Grosso de Sul\n"
        );
    scanf("%d", &opcao);
    if (opcao >= 1 && opcao <= 4){
            printf("Digite o valor do produto R$");
            scanf("%f", &preco);
		
		switch(opcao){
			case 1 : 
                preco_imposto = (7.0 / 100) * preco;
				printf(
                    "O produto enviado para MG com o valor de R$%.2f com imposto de R$%.2f\n"
                    "Valor total R$%.2f",
                    preco, preco_imposto, preco + preco_imposto
                );
				break;
			case 2 : 
				preco_imposto = (12.0 / 100) * preco;
				printf(
                    "O produto enviado para SP com o valor de R$%.2f com imposto de R$%.2f\n"
                    "Valor total R$%.2f",
                    preco, preco_imposto, preco + preco_imposto
                );
				break;
			case 3 : 
				preco_imposto = (15.0 / 100) * preco;
				printf(
                    "O produto enviado para RJ com o valor de R$%.2f com imposto de R$%.2f\n"
                    "Valor total R$%.2f",
                    preco, preco_imposto, preco + preco_imposto
                );
				break;
			case 4 :
				preco_imposto = (8.0 / 100) * preco;
				printf(
                    "O produto enviado para MS com o valor de R$%.2f com imposto de R$%.2f\n"
                    "Valor total R$%.2f",
                    preco, preco_imposto, preco + preco_imposto
                );
				break;
		}
	}
	else {
		printf("Opcao Invalida");
	}
}
