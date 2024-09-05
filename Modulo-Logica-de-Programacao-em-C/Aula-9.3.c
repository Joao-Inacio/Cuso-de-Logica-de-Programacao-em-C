#include <stdio.h>

int converter_segundos(int horas, int minutos, int segundos){

    int horas_minutos = horas * 60;
    int minutos_segundos = (horas_minutos + minutos) * 60;
    int segundo_segundos = minutos_segundos + segundos;
    
    printf("Total de Segundos: %d", segundo_segundos);
}

int main()
{
    int hora, minuto, segundo;

    printf("Digite a Hora: ");
    scanf("%d", &hora);

    printf("Digite o Minuto: ");
    scanf("%d", &minuto);

    printf("Digite os segundo: ");
    scanf("%d", &segundo);

    converter_segundos(hora, minuto, segundo);
}
