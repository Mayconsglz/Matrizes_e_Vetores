#include <stdio.h>

int main() {
    float matriz[3][3];

    printf("Digite os Numeros da matriz 3x3 (inteiros/quebrados):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nNumeros em ordem inversa:\n");
    for (int i = 2; i >= 0; i--) {
        for (int j = 2; j >= 0; j--) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    getch();
}