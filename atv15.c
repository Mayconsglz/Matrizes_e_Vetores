#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];
    char temp[50];

    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                // troca os nomes
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

    printf("\nOs nomes em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }

    getch();
}