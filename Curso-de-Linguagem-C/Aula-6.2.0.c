# include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (Scanf convencional): ");
    scanf("%s", s);
    fflush(stdin);  // Limpa o lixo de memoria 

    printf("Resultado: %s\n", s);

    printf("Digite algo (Scanf Aprimorado): ");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n", s);
}

