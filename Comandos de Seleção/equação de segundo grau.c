#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Escreva os coeficientes em ordem a, b e c:\n");
    scanf("%f %f %f", &a, &b, &c);
    //Delta
    delta = (pow(b, 2)) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Os resultados da equação de segundo grau para:\nA = %.2f\nB = %.2f\nC = %.2f\nDelta = %.2f X1 = %.2f X2 = %.2f", a, b, c, delta, x1, x2);
    
    return 0;
}