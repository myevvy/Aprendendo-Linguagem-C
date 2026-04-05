#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);
    printf("Situação: ");

    if (imc < 18.5) {
        printf("Magra\n");
    } 
    else if (imc <= 30.0) {
        printf("Normal\n");
    } 
    else {
        printf("Obesa\n");
    }

    return 0;
}