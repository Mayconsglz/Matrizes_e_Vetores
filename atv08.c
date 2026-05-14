#include <stdio.h>

int main() {
    int vetor[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    getch();
}