#include <stdio.h>

int main() {

int n1, n2, soma, sub, mult, div, rest;

n1 = 0;
n2 = 0;

printf("Digite dois numeros para serem realizados as 5 opera��es aritmeticas entre eles: soma, subtra��o, multiplica��o, divis�o e resto");

printf("\nDigite o primeiro n�mero: ");
scanf("%i", &n1);

printf("\nDigite o segundo n�mero: ");
scanf("%i", &n2);

soma = n1 + n2;
sub = n1 - n2;
mult = n1 * n2;
div = n1 / n2;
rest = n1 % n2;


printf("\nO valor do c�lculo de soma �: ");
printf("%i", soma);

printf("\nO valor do c�lculo de subtra��o �: ");
printf("%i", sub);

printf("\nO valor do c�lculo de multiplica��o �: ");
printf("%i", mult);

printf("\nO valor do c�lculo de divis�o �: ");
printf("%i", div);

printf("\nO valor do c�lculo de divis�o, exibindo seu resto �: ");
printf("%i", rest);

printf("\n");

return 0;
}
