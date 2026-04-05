#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("Escreva dois numeros: ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) {
		printf("O numero %d e maior que o %d ", num1, num2);
	}
    else { 
		printf("O numero %d e maior que o %d ", num2, num1);
	}
    return 0;
} 
