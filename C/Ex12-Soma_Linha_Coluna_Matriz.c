#include <stdio.h>
#include <stdlib.h>

int main () {

int valor[3][3];
int i, j;
int linha[3];
int coluna[3];

i = 0;
j = 0;



//Perguntando valores

while (i <= 2) {
    printf("\n\n  Linha %i: ", i);

    while (j <= 2) {
        printf("\nInsira o valor %i: ", j);
        scanf("%i", &valor[i][j]);
        j++;
    }
    j = 0;
    i++;
}



//Calculando Valores

j = 0;
i = 0;

coluna[0] = 0;

while (i <= 2) {
    linha[i] = 0;
    while (j <= 2) {
        linha[i] = valor[i][j] + linha[i];
        coluna[i] = valor[j][i] + coluna[i];
        j++;
    }
    j = 0;
    i++;
}



//Exibindo valores

i = 0;
j = 0;

while (i <= 2) {
    printf("\n");
    while (j <= 2) {
        printf("%i    ", valor[i][j]);
        j++;
    }
    j = 0;
    i++;
}




i = 0;
j = 0;
printf("\n\n");

while (i <= 2) {
    printf("\nA soma da linha %i é: %i", i, linha[i]);
    i++;
}

i = 0;
j = 0;

printf("\n\n");

while (i <= 2) {
    printf("\nA soma da coluna %i é: %i", i, coluna[i]);
    i++;
}





return 0;
}
