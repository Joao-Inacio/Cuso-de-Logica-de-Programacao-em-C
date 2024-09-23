//  Controle de Fluxo break e continue
#include <stdio.h>


int main(){
    int i;
    for(i=1; i<=10; i++){
        if (i == 2){
            continue;
        }

        printf("%d ", i);

        if (i == 5){
            break;
        }
    }
}
