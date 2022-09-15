// Faça uma função que receba como parâmetro um texto t, armazenado em um vetor de caracteres e retorne verdadeiro caso o texto contenha uma sequência
// de caracteres p também fornecida como parâmetro, retornando falso em caso contrário. 
// Assuma que as sequências passadas são strings do c e que seu tamanho é dado pela função strlen.

// Ex: Se t=“eu estudo na UFAM, Universidade Federal do Amazonas” fosse passado como parâmetro e p=”UFAM”, a função retornaria verdadeiro.

// Considere que você não pode usar funções de busca que já existem na linguagem C, tais como strstr (que faz o mesmo que estou pedindo na questão). 
// Dentre as opções da string.h, você só pode usar a strlen().

#include <string.h>

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao05 que deve atender ao enunciado do exercício. 

char *questao05(char *texto, char *padrao) {
	int i, j;
	
	for (i=0; texto[i]; i++) {
		for(j=0; padrao[j] && texto[i +j]  && padrao[j] == texto[i + j]; j++);
		if (padrao[j] == 0) {
			return &(texto[i]);
		}
	}
	return 0;
}

//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

#include <stdio.h>



int main() {
  char texto[2000]; // texto onde vamos buscar a string de consulta
  char padrao[100]; // string de consulta
   unsigned tamVetor;

   unsigned x;

   scanf("%[^#]%*c",texto);
   scanf("%[^#]%*c",padrao);

   if(questao05(texto,padrao)) {
     printf("VERDADEIRO\n");
   }
   else {
     printf("FALSO\n");
   }
   
}
