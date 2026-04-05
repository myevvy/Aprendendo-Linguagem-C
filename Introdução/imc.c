#include <stdio.h>
#include <math.h>
int main(void){
    float peso, altura, imc;
    printf("Qual o peso e a altura?\n");
    scanf("%f %f", &peso, &altura);
    imc = peso/pow(altura,2);
    printf("IMC = %.1f\n",imc);
    if( imc<=30) printf("Nao esta obeso\n");
    else printf("Esta obeso\n");
    return 0;
}
