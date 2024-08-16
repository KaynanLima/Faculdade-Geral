#include <stdio.h>

int main () {

    int times, jogadores, ti, ji, idade, peso, altura, qtdMaior, mediaIdade, mediaAltura;
    float porcPeso;

    printf("\nEm um compeonato de Futebol existe 5 times e cada time possui 5 jogadores. Faça um programa que receba idade, peso e altura de cada jogador.\n");

    times = 5;
    jogadores = 5;

    qtdMaior = 0;
    porcPeso = 0;
    mediaAltura = 0;
    mediaIdade = 0;
    ti = 1;

    while (ti <= times) {
        ji = 1;

        printf("\n\n\n---------------------------------------------------------------------------");
        printf("\n\n    Time %i:", ti);

        while (ji <= jogadores) {
            printf("\n\nJogador %i", ji);

            printf("\n\nDigite a idade: ");
            scanf("%i", &idade);
            printf("Digite o peso: ");
            scanf("%i", &peso);
            printf("Digite a Altura, em cm: ");
            scanf("%i", &altura);

            if (idade > 18) {
                qtdMaior = qtdMaior + 1;
            }

            if (peso > 60) {
                porcPeso = porcPeso + 1;
            }

            mediaIdade = mediaIdade + idade;
            mediaAltura = mediaAltura + altura;

            ji++;

            printf("\n\n-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -");
        }
        mediaIdade = mediaIdade / jogadores;

        printf("\n\n\nA media das idades deste time é de: %i", mediaIdade);
        ti++;
    }

    mediaAltura = mediaAltura / (jogadores * times);
    porcPeso = porcPeso * 100 / (jogadores * times);

    printf("\n\n\nA quantidade de jogadores com idade inferior a 18 anos é de %i", qtdMaior);
    printf("\nA média das alturas de todos os jogadores do campeonato é de %i", mediaAltura);
    printf("\nA porcentagem de Jogadores com mais de 60kg é de %.2f porcento", porcPeso);

return 0;
}
