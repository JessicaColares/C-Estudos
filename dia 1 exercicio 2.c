// Faça um programa para ler 3 números reais via teclado e imprimir a média dos valores lidos. 
// A média deve ser impressa exatamente com duas casas decimais e sem mostrar zeros à esquerda.

#include <stdio.h>

int main() {
	// TERMINE o código aqui
	float a;
	float b;
	float c;
	float media;
	
	printf(" ");
	scanf("%f", &a);
	
	printf(" ");
	scanf("%f", &b);
	
	printf(" ");
	scanf("%f", &c);
	
	media = (a+b+c)/3;
	
	printf("%.2f", media);
	return 0;
}
