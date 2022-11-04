/*
2. Faça um programa que preencha um vetor de 10 posições com números inteiros, exiba
todo o vetor informado e o maior valor encontrado nesse vetor.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int vet[10];
	int maiorValor = 0;
	
	for (int i = 0; i < 10; i++){
		printf("Digite o numero: ");
		scanf("%d",&vet[i]);
		if(vet[0] < maiorValor && i == 0){
			maiorValor = vet[0];
		}
	    if(vet[i] > maiorValor){
			maiorValor = vet[i];
		}
		
	}
	printf("Conjunto: ");
	for(int j = 0; j < 10; j++){
		printf("%d ",vet[j]);
	}
	
	printf(" Maior Numero: %d",maiorValor);
}
