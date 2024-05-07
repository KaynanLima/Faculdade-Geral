#include <stdio.h>

int main () {

int i, quant;
float media, n, acumulador;

printf("Para calcular a media entre notas, digite primeiramente a quantidade de notas que deseja inserir: ");
scanf("%i", &quant);

i = 1;

do {
    printf("\nDigite uma nota: ", &i);
    scanf("%f", &n);
    acumulador = acumulador + n;
    i = i + 1;
} while(i <= quant);

media = acumulador / quant;

printf("\nA media entre estas notas é: %f", media);

if (media >= 6) {
    printf("\nConsiderando de que a nota mínima é 6, voce esta APROVADO\n");
    if (media == 10) {
        printf("Excelente! Parabens!\n");
    }
    if (media >= 8 && media < 10) {
        printf("Muito bom!\n");
    }
}
else {
    if (media <= 6 && media >= 3) {
        printf("\nConsiderando de que a nota mínima é 6, voce deve fazer uma SUBSTUTIVA\n");
    }
    else {
        printf("\nConsiderando de que a nota mínima é 6, voce esta REPROVADO\n");
    }
}

return 0;
}
