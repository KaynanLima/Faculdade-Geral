#include <stdio.h>

int main () {

float vCompra, vDesconto, vPagar;

printf("Qual o valor gasto na compra?\n");
scanf("%f", &vCompra);

if (vCompra > 300) {
    printf("\nParab�ns! O valor � v�lido para nossa promo��o!\n");

    vDesconto = (vCompra - 300) * 0.10;
    vPagar = vCompra - vDesconto;

    printf("O valor Gasto � de: %f\n", vCompra);
    printf("O valor Descontado � de: %f\n", vDesconto);
    printf("O valor a Pagar, portanto, � de: %f\n", vPagar);
} else {
    printf("\nO valor Gasto � de: %f\n", vCompra);
    printf("Seu valor Gasto n�o � o suficiente para a promo��o.\n");
}

return 0;
}
