/*
4. Faça um programa para ler um conjunto de números inteiros, armazenando-o em vetor
e calcular a soma de todos os valores armazenados. Os conjuntos têm 10 elementos cada.
Ao final, o programa deve exibir todos os valores do vetor e o somatório calculado.
OBS.:
- O vetor deve ser declarado como uma variável local, dentro do main;
- Os dados do vetor devem ser lidos por um procedimento de leitura, aplicando
corretamente o uso de passagem de parâmetros;
- A impressão dos dados deve ser feita por um procedimento e chamada no
main para que seja executada.
*/

#include <stdio.h>
#include <stdlib.h>
#define max 10
void lerVetor(int vetor[]){
	int i;
	for(i = 0; i < max;i++){
		printf("Digite o numero: ");
		scanf("%d",&vetor[i]);
	}
}
void soma(int vetor[], int* somaTotal){
	int j;
	for(j = 0; j < max; j++){
		*somaTotal = *somaTotal + vetor[j];
	}
}

void imprime(int vetor[], int somaTotal){
	int x;
	for(x = 0; x < max; x++){
		printf("%d ",vetor[x]);
	}
	printf("\n A soma total e: %d",somaTotal);
}

int main(){
	int vetor[max];	
	int somatorio = 0;
	lerVetor(vetor);
	soma(vetor,&somatorio);
	imprime(vetor,somatorio);
}
