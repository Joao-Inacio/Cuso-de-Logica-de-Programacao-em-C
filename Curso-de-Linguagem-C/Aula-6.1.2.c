# include <stdio.h>

int main(){
    int v[3];

    int i;

    for(i=0; i<3; i++){
        printf("Insira um dado: ");
        scanf("%d", &v[i]);
    }
    printf("Dados inseridos:\n");

    for (i = 0; i < 3; i++){
        printf("%d ", v[i]);
    }

}

