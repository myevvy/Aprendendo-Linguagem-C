#include <stdio.h>
#include <conio.h>

int main(void) {
	int falta;
	float media;
	printf("Escreva a sua media e a sua quantidade de faltas: ");
	scanf("%f %d", &media, &falta);
	if (media >= 6 && falta <= 5) {_textcolor(9); puts("Aprovado"); }
    else {_textcolor(12); puts("Reprovado");}
	return 0;
}
