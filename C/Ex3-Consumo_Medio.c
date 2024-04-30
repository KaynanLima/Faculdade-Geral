#include <stdio.h>

int main () {

int distancia, gasolina, consumo;

printf("Para calcular o consumo médio, digite a distância percorrida e a quantidade de gasolina gasta em litros.");

printf("\nDigite a distancia percorrida em km: ");
scanf("%i", &distancia);

printf("\nDigite a gasolina gasta em litros: ");
scanf("%i", &gasolina);

consumo = gasolina / distancia;

printf("\nO consumo médio de gasolina em l/km é de: %i", consumo);


return 0;
}
