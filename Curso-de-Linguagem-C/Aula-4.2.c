#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0){
        printf("Aluno com a media %.1f esta aprovado\n", media);
    }
    else{
        printf("Aluno com a media %.1f esta reprovado\n", media);
    }
    
}
