#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int placa, final;

    printf("Digite o número da placa (apenas números): ");
    scanf("%d", &placa);

    final = placa % 10;

    printf("Dia do rodízio: ");
    if (final == 1 || final == 2) {
        printf("Segunda-feira\n");
    } 
    else if (final == 3 || final == 4) {
        printf("Terça-feira\n");
    } 
    else if (final == 5 || final == 6) {
        printf("Quarta-feira\n");
    } 
    else if (final == 7 || final == 8) {
        printf("Quinta-feira\n");
    } 
    else if (final == 9 || final == 0) {
        printf("Sexta-feira\n");
    }

    return 0;
}
