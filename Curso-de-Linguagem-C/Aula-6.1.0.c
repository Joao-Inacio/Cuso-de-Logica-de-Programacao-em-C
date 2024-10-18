# include <stdio.h>

int main(){
    int v[3];

    float m;

    v[0] = 50;
    v[1] = 20;
    v[2] = 30;

    m = (v[0] + v[1] + v[2]) / 3;

    printf("Resultado: %f\n", m);
}

