// Faça uma função que calcule e retorne o produto dos n primeiros números pares positivos, onde n deve ser passado como parâmetro.
// A função deve calcular os valores de forma iterativa.
//  Não use uma fórmula pronta! Ex.: para n=4, a função deve retornar 8*6*4*2=384, fazendo as operações de multiplicação mostradas. 
// Se n não for positivo, a função deve retornar 1.
// Assuma o valor de n como sendo um número inteiro positivo (não nulo).

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao01 que deve atender ao enunciado do exercício. 

int questao01(long int valor) {
	long int a, b, i;
	b = 1;
	a = 2;
	i = 0;
	if (valor <= 0) {
		return 1;
	}
	while (i < valor) {
		b = b * a;
		a = a + 2;
		i = i + 1;
	}
	return b;
}

//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MODIFIQUE!

#include <stdio.h>

int main() {
   long int valor;

   scanf("%ld%*c",&valor);
   printf("%ld\n", questao01(valor));

}
