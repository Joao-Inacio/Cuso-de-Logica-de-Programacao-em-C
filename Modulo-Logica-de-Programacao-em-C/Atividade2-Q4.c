// 4. Elabore um programa que peça ao usuário para inserir uma senha (A senha correta é 1453). 
// O programa deve continuar solicitando a senha até que o usuário insira a senha correta. 
// Se a senha estiver correta, exiba uma mensagem de boas-vindas. Utilize o laço do...while para
// solucionar esse problema.
#include <stdio.h>

int main(){
    int senha, senha_correta;
    senha_correta = 1453;
    do
    {
        printf("Digite uma senha: ");
        scanf("%d", &senha);
    } while (senha != senha_correta);
    printf("\nSenha correta\nBoas-Vindas\n");
    
}

