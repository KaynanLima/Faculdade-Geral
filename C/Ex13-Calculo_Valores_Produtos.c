#include <stdio.h>
#include <stdlib.h>

int main () {

    char produtos[5][99];
    int precos[5][4];
    int transporte[5];
    int novoPreco[5][4];
    int i, j;

    i = 0;
    j = 0;


    printf("  Insira o nome dos Produtos\n");
	while (i < 5) {
        printf("\nProduto %i: ", i);
        fgets(produtos[i], 99, stdin);
        i++;
	}




	i = 0;

    printf("\n\n\n  Digite os preços deste produtos em lojas diferentes \n");
    while (i < 5) {
        printf("\n  Loja %i:\n", i);
        while (j < 4){
            printf("Valor do Produto %s: ", produtos[j]);
            scanf("%i", &precos[i][j]);
            j++;
        }
    j = 0;
    i++;
    }



    i = 0;
    j = 0;
    printf("\n\n\n  Insira o transporte dos Produtos\n");
	while (j < 4) {
        printf("\nTransporte do %s ", produtos[j]);
        scanf("%i", &transporte[j]);
        j++;
	}



    i = 0;
    j = 0;
    printf("\n\n\n  Corrigindo Preço dos Produtos \n\n\n");
    while (i < 5) {
        while (j < 4) {
            novoPreco[i][j] = precos[i][j] + transporte[j] + (precos[i][j] * 0.05);
            j++;
        }
        j = 0;
        i++;
    }







    //Exibindo valores:
    i = 0;
    j = 0;
    printf("\n\n\n  Exibindo valores \n\n\n");
    while (i < 5) {
        while (j < 4) {
            printf("   %i   ", novoPreco[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

return 0;
}
