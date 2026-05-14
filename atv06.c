#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int numero;
    int encontrado = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101;
        }
    }


    printf("Matriz 5x5:\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == numero) {
                printf("O numero foi encontrado na linha %d, coluna %d\n", i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("O numero nao foi encontrado na matriz.\n");
    }

   getch();
}