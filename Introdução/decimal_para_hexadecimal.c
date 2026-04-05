#include <stdio.h>

int main(void)
{
    int numero;
    printf("Escreva um número decimal: ");
    scanf("%d", &numero);
    printf("Número em hexadecimal:");
    printf("%x", numero);

    return 0;
}