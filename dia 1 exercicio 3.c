// Faça um programa para ler 3 números via teclado e imprimir a mediana entre os 3 números inteiros digitados.
// A mediana é o valor intermédiario entre os 3 números, o que não é nem o maior e nem o menor dos 3. Exemplo: entre 2;10 e 3, a mediana é 3.
// Procure na internet a definição de mediana caso ainda tenha dúvidas.

#include <stdio.h>

int main() {
	int a, b, c;
	
	printf(" ");
	scanf("%d", &a);
	
	printf(" ");
	scanf("%d", &b);
	
	printf(" ");
	scanf("%d", &c);
	
	if (a > c) {
		int tmp = c;
		c = a;
		a = tmp;
	}
	if (a > b) {
		int tmp = b;
		b = a;
		a = tmp;
	}
	if (b > c) {
		int tmp = c;
		c = b;
		b = tmp;
	}
	printf("%d", b);
}
