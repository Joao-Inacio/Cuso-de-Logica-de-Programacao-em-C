// 6. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
// Escreva ao final a matriz obtida.
#include <stdio.h>


int main(){
    int matriz[5][5];
    int linha, coluna;

    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            if (linha == coluna) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0; 
            }
        }
    }


    printf("\nMatriz 5x5:\n");
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");

}

