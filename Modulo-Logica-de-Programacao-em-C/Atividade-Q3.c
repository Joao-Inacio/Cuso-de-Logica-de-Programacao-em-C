// 3. Receba o salario-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse 
// funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, 
// ele paga 7% de imposto sobre o salário-base.
#include <stdio.h>

int main(){
    float salario_base, salario_a_receber;

    printf("Digite seu salario base: ");
    scanf("%f", &salario_base);

    salario_a_receber = (((5.0 / 100) * salario_base) + salario_base) - ((7.0 / 100) * salario_base);
    printf("O salario R$%.2f", salario_a_receber);

}