// Faça uma função que receba como parâmetro um vetor com n inteiros e inverta as posições dos elementos de maneira que o primeiro elemento troque de valor com o último,
// o segundo com o penúltimo e assim por diante. (inverter as posições dos elementos do vetor)

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao03 que deve atender ao enunciado do exercício. 
// função retorna void porque ela modifica diretamente o vetor e não precisa

void questao03 (int vet[], int tamVetor){
	int i, j;
	int tmp;
	i = 0;
	j = tamVetor-1;
	
	while (i<j) {
		tmp = vet[i];
		vet[i] = vet[j];
		vet[j] = tmp;
		i++;
		j--;
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
   questao03(vet,tamVetor);
   mostraVetor(vet,tamVetor);
}

