#include <stdio.h>

int main(){
	int dado = 10;
	printf("Dado antes do incremento: %d \n", dado);
	
	dado++;
	printf("Dado depois do incremento: %d \n", dado);
	
	dado--;
	printf("Dado depois do decremento: %d \n", dado);
	
	dado += 3;
	printf("Dado depois do incremento em 3 unidades: %d \n", dado);
	
	dado -= 3;
	printf("Dado depois do decremento em 3 unidades: %d \n", dado);
	
	dado *= 3;
	printf("Dado depois de multiplicar por 3: %d \n", dado);
	
	dado /= 3;
	printf("Dado depois de dividir por 3: %d \n", dado);
	
}
