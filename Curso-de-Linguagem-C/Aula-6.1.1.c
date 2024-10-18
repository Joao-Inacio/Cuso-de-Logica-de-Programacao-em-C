# include <stdio.h>

int main(){
    int v[3] = {10, 40, 100};

    int i;

    float s;

    for (i=0; i<3;i++){
        s += v[i];
    }

    printf("Resultado: %f\n", s/3);
}

