//IMPORTANTE: ESTE CÓDIGO PODE AINDA CONTER ERROS, POIS NÃO CONSEGUI TESTA-LO APROPRIADAMENTE!

#include <stdio.h>

int main() {

    //Declara as variaveis para serem usadas no cálculo
    float A;
    float B;
    float soma;
    float media;
    int contador;
    
    printf("Digite um número: ");
    scanf("%f", &A);
    printf("Digite outro número: ");
    scanf("%f", &B);

    //Define como 0 a variável que vai servir para contar a quantidade de números presentes no intervalo
    contador = 0;

    //Abre um SE para permitir que a sequência seja feita a partir do menor número
    if (A < B) {
        //Abre uma repetição para adquirir os números da sequência. Todos os números dela são somados.
        for (int i = A+1; i < B; i++) {
            soma = soma + i;
            //Exibe o valor de i sendo repetido (útil para testar os valores)
            printf("%d\n", i);
            contador = contador + 1;
        }
        //Funciona de forma parecida com os exemplares acima, mas considerando que B < A
    } else {
        for (int i = B+1; i < A; i++) {
            soma = soma + i;
            printf("%d\n", i);
            contador = contador + 1;
        }
    }

    //Calcula a Media de acordo com a soma
    media = soma / contador;

    //Exibe os resultados para o usuário
    printf ("A soma do Intervalo dos Números A e B é: %f\n", soma);
    printf ("A média do Intervalo dos Números A e B é: %f\n", media);
}


