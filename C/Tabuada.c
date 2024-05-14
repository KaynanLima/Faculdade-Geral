#include <stdio.h>

int main() {

    int base, i, resultado;
    printf("Digite um número para saber sua tabuada: ");
    scanf("%i", &base);
    printf("\n");
    
    i = 1;
    
    do {
        resultado = base * i;
        printf("\n %i x %i = %i", base, i, resultado);
        
        i = i + 1;
    } while (i <= 10);

    return 0;
}
