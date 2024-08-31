#include <stdio.h>


int main(){
    int d;

    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &d);

    switch (d){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Freira");
            break;
        case 3:
            printf("Terça-Freira");
            break;
        case 4:
            printf("Quarta-Freira");
            break;
        case 5:
            printf("Quinta-Freira");
            break;
        case 6:
            printf("Sexta-Freira");
            break;
        case 7:
            printf("Sabado");
            break;
    
        default:
            printf("Valor invalido");
            break;
        }

}
