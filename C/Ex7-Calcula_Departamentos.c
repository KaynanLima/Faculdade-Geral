#include <stdio.h>

int main () {

    int FuncA, FuncB, FuncC, SalA, SalB, SalC, TCA, TCB, TCC, TotalA, TotalB, TotalC, SalTC;

    printf("A TrinCompany possui tr�s departamentos.\n");
    printf("Para calcular os valores, insira a quantidade de funcion�rios dos seguintes departamentos:");

    printf("\nDepartamento A: ");
    scanf("%i", &FuncA);

    printf("\nDepartamento B: ");
    scanf("%i", &FuncB);

    printf("\nDepartamento C: ");
    scanf("%i", &FuncC);

    printf("\n\n\nAgora, defina os valores de Sal�rio para cada departamento: ");

    printf("\nSalario de A: ");
    scanf("%i", &SalA);

    printf("\nSalario de B: ");
    scanf("%i", &SalB);

    printf("\nSalario de C: ");
    scanf("%i", &SalC);

    printf("\n\n\nPara finalizar, defina o Tempo de Casa de cada departamento: ");

    printf("\nTempo de Casa de A: ");
    scanf("%i", &TCA);

    printf("\nTempo de Casa de B: ");
    scanf("%i", &TCB);

    printf("\nTempo de Casa de C: ");
    scanf("%i", &TCC);

    printf("\n\n\nAgora, iremos calcular os devidos valores necess�rios.\n");

    TotalA = SalA * FuncA;
    TotalB = SalB * FuncB;
    TotalC = SalC * FuncC;

    printf("\nO valor total de Sal�rio no Departamento A � de: %i", TotalA);
    printf("\nO valor total de Sal�rio no Departamento B � de: %i", TotalB);
    printf("\nO valor total de Sal�rio no Departamento C � de: %i", TotalC);

    if (TCA > TCB) {
        if (TCA > TCC) {
            printf("\n\nO Departamento com mais Tempo de Casa � o Departamento A");
            SalTC = SalA;
        }
    } else {
        if (TCB > TCC) {
            printf("\n\nO Departamento com mais Tempo de Casa � o Departamento B");
            SalTC = SalB;
        } else {
            printf("\n\nO Departamento com mais Tempo de Casa � o Departamento C");
            SalTC = SalC;
        }
    }

    printf("\nO Sal�rio deste Departamento � de: %i", SalTC);

    printf("\n\nOs Departamentos com Maiores e Menores sal�rios s�o, respectivamente: ");


    if (SalA > SalB) {
        if (SalA > SalC) {
            if (SalB < SalC) {
                printf("Departamento A e Departamento B");
            } else{
                printf("Departamento A e Departamento C");
            }
        }
    } else {
        if (TCB > TCC) {
            if (SalA < SalC) {
                printf("Departamento B e Departamento A");
            } else {
                printf("Departamento B e Departamento C");
            }
        } else {
            if (SalA < SalB) {
                printf("Departamento C e Departamento A");
            } else {
                printf("Departamento C e Departamento A");
            }
        }
    }


    printf("\n\n\nCom isso, finalizamos os calculos necess�rios.\n\n");
return 0;
}
