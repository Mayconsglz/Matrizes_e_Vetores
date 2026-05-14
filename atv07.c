#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    int opcao, temp;

    srand(time(NULL));

    for (int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
    }

    printf("Vetores:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n\nEscolha a ordem desejada:\n");
    printf("1 - Ordem Crescente\n");
    printf("2 - Ordem Decrescente\n");
    printf("Qual a Opcao: ");
    scanf("%d", &opcao);

    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24 - i; j++) {
            if ((opcao == 1 && vetor[j] > vetor[j + 1]) ||
                (opcao == 2 && vetor[j] < vetor[j + 1])) {
                
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetores na ordem desejada:\n\n");
    for (int i = 0; i < 25; i++) {
        printf("%3d ", vetor[i]);
    }

    printf("\n");

    getch();
}