// 4. Escreva um programa de ajuda para vendedores. A partir de um valor total lido do produto, mostre:

// • O total a pagar com desconto de 10%;
// • O valor de cada parcela, no parcelamento de 3 x sem juros;
// • A comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com descconto)
// • A comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
#include <stdio.h>

int main(){
    float valor, forma_pagamento, valor_desconto10, comissao_desconto5, comissao5;
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf(
        "Escolha a forma de pagamento:\n"
        "1 - Pagamento a vista com desconto de 10%\n"
        "2 - Parcelado em 3x sem juros\n"
    );
    scanf("%f", &forma_pagamento);
    if(forma_pagamento == 1 || forma_pagamento == 2){
        if (forma_pagamento == 1){
            valor_desconto10 = valor - ((10.0 / 100) * valor);
            comissao_desconto5 =  ((5.0 / 100) * valor_desconto10);
            printf("O valor total: R$%.2f com desconto R$%.2f\n ", valor, valor_desconto10);
            printf("A comisao do vendedor: R$%.2f\n", comissao_desconto5);
        }
        else{
            comissao5 = ((5.0 / 100) * valor);
            printf("O valor de R$%.2f parcelado em 3XR$%.2f\n", valor, valor / 3);
            printf("A A comisao do vendedor: R$%.2f\n", comissao5);
        }
    }
    else{
        printf("Opcao invalida");
    }
    
}