#include <stdio.h>

int main () {

int numero, intervalo1, intervalo2, conferidor, impar, somatoria, resultado;

printf("Aplicação para exibir os números pares em um determinado intervalo.\n");
printf("\nDigite o menor numero do intervalo: ");
scanf("%i", &intervalo1);

printf("\nDigite o maior numero do intervalo: ");
scanf("%i", &intervalo2);

if (intervalo1<intervalo2) {
    conferidor = intervalo1 % 2;
//    printf("\nTESTE: CONFERIDOR É IGUAL A %i \n\n", conferidor);

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

    printf("\nA quantidade de numeros impares neste intervalo é de: %i", impar);
    resultado = somatoria + impar;
    printf("\n\nO resultado da soma entre todos os numeros pares com a quantidade de numeros impares é de: %i", resultado);

    conferidor = resultado % 2;

    if (conferidor == 0) {
        printf("\nAlém do mais, este resultado é um número PAR.\n");
    } else {
        printf("\nAlém do mais, este resultado é um número IMPAR.\n");
    }



} else {
    printf("\n\nErro: Os numeros para formar o intervalo provavalmente estão fora de ordem.\n\n");
}


return 0;
}
