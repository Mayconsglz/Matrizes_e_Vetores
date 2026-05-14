#include <stdio.h>

int main() {
    char nomes[5][50]; 

    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]); 
    }

    printf("\nOs nomes digitados sao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %s\n", i + 1, nomes[i]);
    }

    getch();
}