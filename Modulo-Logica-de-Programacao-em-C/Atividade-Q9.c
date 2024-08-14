// 9. Escreva um programa que permita ao usuário escolher uma faixa de salário
// (1 para até R$ 2.000, 2 para de R$ 2.000 a R$ 5.000, 3 para acima de R$ 5.000) 
// e informe o valor do salário bruto. 
// Utilize um switch para calcular o valor do imposto devido com base na faixa escolhida,
// considerando as seguintes alíquotas:
// • Faixa 1: 5%
// • Faixa 2: 10%
// • Faixa 3: 15%
#include <stdio.h>

int main() {
    int faixa_salario;
    float salario, salario_imposto;

    printf(
        "Faixa salarial: \n"
        "1 - Salario ate R$ 2.000\n"
        "2 - Salario de R$ 2.000 a R$ 5.000\n"
        "3 - Salario acima de R$ 5.000\n"
        "Escolha uma faixa de salario: "
    );
    scanf("%d", &faixa_salario);

    if (faixa_salario >= 1 && faixa_salario <= 3) {
        printf("Digite o valor do Salario R$: ");
        scanf("%f", &salario);
        
        switch(faixa_salario) {
            case 1: 
                if (salario < 2000.0) {
                    salario_imposto = (5.0 / 100) * salario;
                    printf(
                        "O Salario com o valor de R$%.2f com imposto de R$%.2f\n"
                        "Valor total R$%.2f\n",
                        salario, salario_imposto, salario - salario_imposto
                    );
                } else {
                    printf("Erro: O salario informado nao corresponde a faixa escolhida.\n");
                }
                break;
            case 2: 
                if (salario >= 2000.0 && salario <= 5000.0) {
                    salario_imposto = (10.0 / 100) * salario;
                    printf(
                        "O Salario com o valor de R$%.2f com imposto de R$%.2f\n"
                        "Valor total R$%.2f\n",
                        salario, salario_imposto, salario - salario_imposto
                    );
                } else {
                    printf("Erro: O salario informado nao corresponde a faixa escolhida.\n");
                }
                break;
            case 3: 
                if (salario > 5000.0) {
                    salario_imposto = (15.0 / 100) * salario;
                    printf(
                        "O Salario com o valor de R$%.2f com imposto de R$%.2f\n"
                        "Valor total R$%.2f\n",
                        salario, salario_imposto, salario - salario_imposto
                    );
                } else {
                    printf("Erro: O salario informado nao corresponde a faixa escolhida.\n");
                }
                break;
        }
    } else {
        printf("Opcao Invalida\n");
    }
}
