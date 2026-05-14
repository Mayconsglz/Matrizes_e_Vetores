#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    printf("Vetor com 25 numeros aleatorios:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n");

	getch();
}