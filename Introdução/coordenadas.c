#include <stdio.h>
#include <math.h>

int main() {
    float xp, yp, xq, yq;
    float distancia;
    
    printf("Digite as coordenadas de P (xp yp): ");
    scanf("%f %f", &xp, &yp);

    printf("Digite as coordenadas de Q (xq yq): ");
    scanf("%f %f", &xq, &yq);

    distancia = sqrt(pow(xq - xp, 2) + pow(yq - yp, 2));
    printf("A distancia entre os pontos P e Q e: %.2f\n", distancia);

    return 0;
}