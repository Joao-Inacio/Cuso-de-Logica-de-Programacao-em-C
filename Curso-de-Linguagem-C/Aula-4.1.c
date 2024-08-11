#include <stdio.h>

int main(){
    float numero = 0;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if (numero >= 7.0){
        printf("Aluno aprovado\n");
    }
    else{
        printf("Aluno reprovado\n");
    }
    
}
