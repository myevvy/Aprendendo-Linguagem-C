
#include <stdio.h>

int main()
{
    float kilometros, litros, media;
    printf("Digite os kilometros percorridos: ");
    scanf("%f", &kilometros);
    printf("Digite a quantidade que gastou de combustivel em litros: ");
    scanf("%f", &litros);
    media = kilometros / litros;
    printf("O consumo medio de combustivel: ");
    printf("%.2f", media);
    printf("km/l");
    

    return 0;
}