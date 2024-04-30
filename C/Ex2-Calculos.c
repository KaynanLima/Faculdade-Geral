#include <stdio.h>

int main() {

int n1, n2, soma, sub, mult, div, rest;

n1 = 0;
n2 = 0;

printf("Digite dois numeros para serem realizados as 5 operações aritmeticas entre eles: soma, subtração, multiplicação, divisão e resto");

printf("\nDigite o primeiro número: ");
scanf("%i", &n1);

printf("\nDigite o segundo número: ");
scanf("%i", &n2);

soma = n1 + n2;
sub = n1 - n2;
mult = n1 * n2;
div = n1 / n2;
rest = n1 % n2;


printf("\nO valor do cálculo de soma é: ");
printf("%i", soma);

printf("\nO valor do cálculo de subtração é: ");
printf("%i", sub);

printf("\nO valor do cálculo de multiplicação é: ");
printf("%i", mult);

printf("\nO valor do cálculo de divisão é: ");
printf("%i", div);

printf("\nO valor do cálculo de divisão, exibindo seu resto é: ");
printf("%i", rest);

printf("\n");

return 0;
}
