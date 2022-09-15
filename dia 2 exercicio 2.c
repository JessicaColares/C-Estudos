// Faça uma função que receba como parâmetro um vetor de inteiros e seu tamanho. A função deve modificar o vetor de maneira que:
// a) Elementos com valor original menor ou igual a 0 fiquem com o valor -2;
// b) Elementos cujo valor original (vo) esteja no intervalo (1<= vo <= 5) fiquem com o valor -1;
// c) Elementos que não sejam enquadrados nos itens a e b recebam o valor 0.

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO

void questao02(int vet[], int tamVetor){
	int x;
	for (x=0; x<tamVetor; x++){
		if (vet[x]<=0){
			vet[x]=-2;
		}
		else if (vet[x] >= 1 && vet[x]<=5){
			vet[x]=-1;
		}
		else {
			vet[x]=0;
		}
	}
}

// ESCREVA NESSA ÁREA  A FUNCAO questao02 que deve atender ao enunciado do exercício. 
// função retorna void porque ela modifica diretamente o vetor e não precisa






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
   questao02(vet,tamVetor);
   mostraVetor(vet,tamVetor);
}


