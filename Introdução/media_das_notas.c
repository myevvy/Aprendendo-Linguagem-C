#include <stdio.h>

int main()
{
   float nota1, nota2, media;
   printf("Escreva a primeira nota:");
   scanf("%f", &nota1);
   printf("Escreva a segunda nota: ");
   scanf("%f", &nota2);
   media = (nota1 + nota2) / 2;
   printf("Sua média é: ");
   printf("%.2f", media);
   return 0;
}