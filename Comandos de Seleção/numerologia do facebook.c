#include <stdio.h>

int main() {
    int dia, mes, ano;
    int parte1, soma1, soma2, resto;

    printf("Digite a data (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    parte1 = (dia * 100) + mes; 
    soma1 = parte1 + ano; // Ex: 3276


    soma2 = (soma1 / 100) + (soma1 % 100); // 32 + 76 = 108

    resto = soma2 % 5;

    printf("Resultado: ");
    switch(resto) {
        case 0: printf("Tímido\n"); break;
        case 1: printf("Sonhador\n"); break;
        case 2: printf("Paquerador\n"); break;
        case 3: printf("Atraente\n"); break;
        case 4: printf("Irresistível\n"); break;
    }

    return 0;
}