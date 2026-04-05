#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int placa, final;

    printf("Digite o número da placa (apenas números): ");
    scanf("%d", &placa);

    final = placa % 10;

    printf("Dia do rodízio: ");
    switch(final) {
        case 1: case 2:
            printf("Segunda-feira\n"); break;
        case 3: case 4:
            printf("Terça-feira\n"); break;
        case 5: case 6:
            printf("Quarta-feira\n"); break;
        case 7: case 8:
            printf("Quinta-feira\n"); break;
        case 9: case 0:
            printf("Sexta-feira\n"); break;
        default:
            printf("Número inválido.\n");
    }

    return 0;
}