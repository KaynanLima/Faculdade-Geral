#include <stdio.h>

int main () {

int numero, intervalo1, intervalo2, conferidor, impar, somatoria, resultado;

printf("Aplica��o para exibir os n�meros pares em um determinado intervalo.\n");
printf("\nDigite o menor numero do intervalo: ");
scanf("%i", &intervalo1);

printf("\nDigite o maior numero do intervalo: ");
scanf("%i", &intervalo2);

if (intervalo1<intervalo2) {
    conferidor = intervalo1 % 2;
//    printf("\nTESTE: CONFERIDOR � IGUAL A %i \n\n", conferidor);

    if (conferidor == 0) {
        numero = intervalo1;
        impar = 0;

        while (numero <= intervalo2) {
            if (numero != intervalo2) {
                impar = impar + 1;
            }
            somatoria = somatoria + numero;
            printf("%i\n\n", numero);
            numero = numero + 2;
        }
    } else {
        numero = intervalo1 + 1;
        impar = 1;

        while (numero <= intervalo2) {
            if (numero != intervalo2) {
                impar = impar + 1;
            }
            somatoria = somatoria + numero;
            printf("%i\n\n", numero);
            numero = numero + 2;
        }
    }

    printf("\nA quantidade de numeros impares neste intervalo � de: %i", impar);
    resultado = somatoria + impar;
    printf("\n\nO resultado da soma entre todos os numeros pares com a quantidade de numeros impares � de: %i", resultado);

    conferidor = resultado % 2;

    if (conferidor == 0) {
        printf("\nAl�m do mais, este resultado � um n�mero PAR.\n");
    } else {
        printf("\nAl�m do mais, este resultado � um n�mero IMPAR.\n");
    }



} else {
    printf("\n\nErro: Os numeros para formar o intervalo provavalmente est�o fora de ordem.\n\n");
}


return 0;
}
