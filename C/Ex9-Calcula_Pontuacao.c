#include <stdio.h>

int main () {

    int salario, salarioTotal, fi, mi, pontuacao, geralPont, media, maiorPont;

    printf("Uma empresa contratou 15 funcionários temporários. De acordo com o valor das vendas mensais, os funcionários adquirem pontos que determinarão seu salário ao final do mês.\n");

    fi = 1;
    maiorPont = 0;

    while (fi <= 15) {

        printf("\n\n\n---------------------------------------------------------------------------");
        printf("\n\n    Funcionario %i:", fi);

        mi = 1;

        while (mi <= 3) {
            printf("\n\nInsira a pontuacao dele durante o mes %i: ", mi);
            scanf("%i", &pontuacao);

            geralPont = geralPont + pontuacao;

            if (maiorPont < pontuacao) {
                maiorPont = pontuacao;
            }

            if (pontuacao <= 3) {
                salario = 2600 + (2600 * 0.05);
            } else {
                if (pontuacao <= 6) {
                    salario = 2600 + (2600 * 0.1);
                } else {
                    salario = 2600 + (2600 * 0.15);
                }
            }

            salarioTotal = salarioTotal + salario;
            printf("\nO salário deste mes é de: %i\n\n", salario);
            mi++;

            printf("-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -");
        }
        media = geralPont / 3;

        printf("\n\nValores finais do Funcionário %i:", fi);

        printf("\n\n A pontuação geral é de: %i", geralPont);
        printf("\n A pontuação media foi de: %i", media);
        printf("\n O Salario Total é de: %i", salarioTotal);

        fi++;
    }

    printf("\n\n\n---------------------------------------------------------------------------");
    printf("\n\nDurante todo este período, a maior pontuacao obtida foi de %i\n\n\n", maiorPont);

return 0;
}
