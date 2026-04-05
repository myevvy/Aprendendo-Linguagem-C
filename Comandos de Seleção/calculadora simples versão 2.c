#include <stdio.h>

int main()
{
    float x, y;
    char o;
    printf("Digite a expressao:\n");
    scanf("%f %c %f", &x, &o, &y);
    switch(o) {
        case '+' : printf("Valor = %.2f\n", x+y); break;
        case '-' : printf("Valor = %.2f\n", x-y); break;
        case '*' : printf("Valor = %.2f\n", x*y); break;
        case '/' :
            if (y == 0) {
                printf("Erro: Divisão por zero inválida.\n");
            } else {
                printf("Valor = %.2f\n", x / y);
            }
            break;
        default : printf("Operador invalido: %c\n", o);
    }
    return 0;
}