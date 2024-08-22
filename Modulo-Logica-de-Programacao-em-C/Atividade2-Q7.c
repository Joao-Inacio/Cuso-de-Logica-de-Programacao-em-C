// Crie duas matrizes de 3 x 3 e inicialize-as com valores de sua escolha do tipo inteiro. 
// Em seguida, faça a soma dessas das matrizes e armazene o resultado em uma terceira matriz. 
// Após o cálculo, apresente o resultado da soma.
#include <stdio.h>

int main() {
    int matriz1[3][3] = {{1, 0, 3}, {4, 3, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{9, 8, 2}, {6, 5, 4}, {3, 0, 1}};
    int matriz_soma[3][3];
    int linha, coluna;

    for (linha = 0;  linha< 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matriz_soma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
        }
    }

    printf("Resultado da soma das matrizes:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz_soma[linha][coluna]);
        }
        printf("\n");
    }

}
