// Na questão, assuma que uma função é côncava em um trecho se ela possui valores inicialmente decrescentes e em algum ponto passa para valores
// em ordem crescentes até o fim do trecho estudado.

// Veja os exemplos:

// 10 9 8 5 4 6 8 20 é uma amostra que indica concavidade.
// 10 8 7 5 4 3 2 é uma amostra não indica concavidade
// 1 4 3 6 2 2 9 10 é uma amostra não indica concavidade
// 10 9 8 9 10 8 é uma amostra não indica concavidade
// 10 5 3 2 1 é uma amostra não indica concavidade

// Faça uma função que receba como parâmetro um vetor de números reais e seu tamanho. 
// O vetor passado representa um conjunto de amostras de imagens de uma função F estudada por um pesquisador. 
// A função a ser desenvolvida deve retornar verdadeiro (1) se a amostra indica que F pode ser côncava e falso em caso contrário (0).

// Considere que não há valores consecutivos iguais no vetor fornecido.

// Casos de teste:

// 8
// 10 9 8 5 4 6 8 20 é uma amostra que indica concavidade.


// 7
// 10 8 7 5 4 3 2 é uma amostra não indica concavidade

 
// 8
// 1 4 3 6 2 3 9 10 é uma amostra não indica concavidade

 

// 10 9 8 9 10 8 é uma amostra não indica concavidade

 

// 10 5 3 2 1 é uma amostra não indica concavidade



#include<stdio.h>


// FACA AQUI A FUNCAO CONCAVA
int concava (float vet[], int tamVetor) {
	int i, j;
	for(i = 0; i < tamVetor; i++) {
		for (j = tamVetor - 1; j != 0; j--) {
			if ((vet[i] > vet[i+1]) && vet[j] > vet[j-1]) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
}



// FIM DA FINCAO CONCAVA



int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   float vet[tamVetor];

   for(x = 0; x< tamVetor; x++) {
     scanf("%f%*c",&vet[x]);
   }
   if(concava(vet,tamVetor)) {
     printf("1\n");
   }
   else {
     printf("0\n");
   }

}

 
