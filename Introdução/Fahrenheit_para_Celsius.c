#include <stdio.h>

int main(void)
{
    float C, F;
    
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &F);
    C = ((F - 32) * (5.0/9.0));
    printf("A temperatura em Celsius é: ");
    printf("%.3f", C);

    return 0;
}