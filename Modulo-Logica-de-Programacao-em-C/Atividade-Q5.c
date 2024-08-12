// 5. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. 
// Se a prestação for maior que 20% do salário, imprima: 
// Empréstimo não concedido. Caso contrário, imprima empréstimo concedido.
#include <stdio.h>

int main(){
    float salario, prestacao, status_emprestimo;
    printf("Digite o salario R$");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao R$");
    scanf("%f", &prestacao);
    status_emprestimo = (20.0 / 100) * salario;
    if (prestacao > status_emprestimo){
        printf("O emprestimo com o valor das prestacao de R$%.2f, nao foi concedido", prestacao);
    }
    else{
        printf("O emprestimo com o valor das prestacao de R$%.2f, foi concedido", prestacao);
    }
    
}