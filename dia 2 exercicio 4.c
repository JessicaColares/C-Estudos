//  Faça uma função que receba como parâmetro um vetor de inteiros (V) e retorne verdadeiro caso o vetor esteja ordenado de forma crescente (V[i] <= V[j] se i<j).

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao04 que deve atender ao enunciado do exercício. 

int questao04 (int vet[], int tamVetor) {
	int i;
	for (i=0; i<tamVetor-1; i++) {
		if(vet[i] >= vet[i+1]) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

#include <stdio.h>

// mostra dados de um vetor

void mostraVetor(int vet[], unsigned n) {
  unsigned x;

  for(x = 0; x< n; x++) {
    printf("%d ",vet[x]);
  }
  printf("\n");
}

int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   int vet[tamVetor];

   for(x = 0; x< tamVetor; x++) {
     scanf("%d%*c",&vet[x]);
   } 
   if(questao04(vet,tamVetor)) {
     printf("VERDADEIRO\n");
   }
   else {
     printf("FALSO\n");
   }
   
}
