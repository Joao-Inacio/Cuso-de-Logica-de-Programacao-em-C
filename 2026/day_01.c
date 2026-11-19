#include <stdio.h>

int main(void){
    int quantidade;
    double preco, total;

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o preco: ");
    scanf("%lf", &preco);

    total = quantidade * preco;
    printf("Total %.2lf\n",total);
    return 0;
}
