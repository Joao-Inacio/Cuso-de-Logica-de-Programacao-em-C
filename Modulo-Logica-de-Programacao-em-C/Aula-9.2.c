#include <stdio.h>


int verificar_numero(int n){
    if (n <= 0){
        if (n == 0){
            printf("-");
        }
        else{
            printf("-1");
        }
        
    }
    else{
        printf("1");
    }
    
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    verificar_numero(num);
}
