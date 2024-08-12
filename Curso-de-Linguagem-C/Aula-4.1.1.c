#include <stdio.h>

int main(){
    float nota;

    printf("Insira a nota: ");
    scanf("%f", &nota);

    if(nota>= 4 && nota < 7){
        printf("Tem direito a prova final");
    }
    if (nota == 0 && nota < 4){
        printf("Aluno de recuperação");
    }
    

}
