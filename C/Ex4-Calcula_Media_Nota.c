#include <stdio.h>

int main () {

float media, n1, n2;

printf("Para calcular a media entre duas notas e saber se esta aprovado ou nao, digite cada um deles");

printf("\nDigite a primeira nota: ");
scanf("%f", &n1);

printf("\nDigite a segunda nota: ");
scanf("%f", &n2);

media = (n1 + n2) / 2;

printf("\nA media entre %f e %f é de: %f", n1, n2, media);

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
