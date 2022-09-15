// Escreva um programa que leia três números inteiros a partir do teclado. Como saída, imprima os valores em ordem crescente.

// Teste seu codigo aos poucos.
// Nao teste tudo no final, pois fica mais dificil de identificar erros.
// Nao se intimide com as mensagens de erro. Elas ajudam a corrigir seu codigo.

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
	printf("%d %d %d", a, b, c);
}
