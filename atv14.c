#include <stdio.h>

int main() {
    int vetor[10];
    int maior, menor;
    int posMaior, posMenor;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    posMaior = 0;
    posMenor = 0;

    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("\nMaior numero: %d na posicao %d\n", maior, posMaior);
    printf("Menor numero: %d na posicao %d\n", menor, posMenor);

    getch();
}