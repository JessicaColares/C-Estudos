// Faça uma função que receba como parâmetro dois vetores de números reais e seu tamanho. 
// Considere que os dois vetores têm o mesmo tamanho e por isso apenas 1 parâmetro para o tamaho será passado. 
// A função deve retornar verdadeiro se, e somente se, o primeiro vetor for igual a uma constante k (não nula) vezes o segundo vetor. 
// A função deve retornar falso em caso contrário.


// Dados dois vetores v1 e v2, a função verifica se v1=xv2, onde x é um número real.

// Para facilitar sua vida, considere que não há elementos com valor igual a zero nos vetores!

// Exemplos:

// Para os vetores (2 4 1 9 1)   e  (4 8 2 18 2) a função retorna verdadeiro
// Para os vetores (2 4 1 9 1)   e  (3 8 2 18 1) a função retorna falso

#include<stdio.h>


// FACA AQUI A FUNCAO LD conforme o enunciado, de maneira que você complete o programa abaixo.
int LD ( float vet1[], float vet2[], unsigned tamVetor){
	int i,j,c;
	c = 0;
	for ( i = 0; i < tamVetor; i++){
		if(vet1[i]/vet2[i] == vet1[i+1]/vet2[i+1]){
				c = c + 1;
				}
	}
	    if (c >= tamVetor-1){
		    return 1;
			    }
	    else    {   
	        return 0;
		}
			
		
	}



// FIM DA FINCAO LD



int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   float vet1[tamVetor], vet2[tamVetor];

   for(x = 0; x< tamVetor; x++) {
     scanf("%f%*c",&vet1[x]);
   }
   for(x = 0; x< tamVetor; x++) {
     scanf("%f%*c",&vet2[x]);
   }	
	
	
   if(LD(vet1, vet2, tamVetor)) {
     printf("1\n");
   }
   else {
     printf("0\n");
   }

}
