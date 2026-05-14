#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    int numero;
    int encontrado = 0;

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    printf("Vetor:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n\nDigite um numero para ser buscado: ");
    scanf("%d", &numero);

    for (int i = 0; i < 25; i++) {
        if (vetor[i] == numero) {
            printf("O numero foi encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("O numero nao foi encontrado no vetor.\n");
    }

    getch();
}