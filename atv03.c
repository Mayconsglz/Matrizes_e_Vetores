#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    int maior, posicao;

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    maior = vetor[0];
    posicao = 0;

    for (int i = 1; i < 25; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Vetores:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n\nO maior valor: %d\n", maior);
    printf("A posicao: %d\n", posicao);

    getch();
}