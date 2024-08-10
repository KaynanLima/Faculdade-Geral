#include <stdio.h>

int main () {

float vCompra, vDesconto, vPagar;

printf("Qual o valor gasto na compra?\n");
scanf("%f", &vCompra);

if (vCompra > 300) {
    printf("\nParabéns! O valor é válido para nossa promoção!\n");

    vDesconto = (vCompra - 300) * 0.10;
    vPagar = vCompra - vDesconto;

    printf("O valor Gasto é de: %f\n", vCompra);
    printf("O valor Descontado é de: %f\n", vDesconto);
    printf("O valor a Pagar, portanto, é de: %f\n", vPagar);
} else {
    printf("\nO valor Gasto é de: %f\n", vCompra);
    printf("Seu valor Gasto não é o suficiente para a promoção.\n");
}

return 0;
}
