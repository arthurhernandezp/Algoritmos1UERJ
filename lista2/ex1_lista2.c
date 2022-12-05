/*
1. Elabore um programa que preencha um vetor de valores inteiros de 20 posições e
ao final faça uma busca sequencial por um valor, a ser informado pelo usuário.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void lerVet(int vetor[]){
	int i;
	for(i = 0; i < 5;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
}

void buscaSequencial(int numeroX,int vetor[]){
	int i;
	for(i = 0; i < 5;i++){
		if(vetor[i] == numeroX){
			printf("O numero selecionado %d foi encontrado na posição %d de [0..4]",numeroX, i);
			break;
		}
	}
	if(i == 5 && vetor[i] != numeroX){
		printf("O numero selecionado %d não foi encontrado",numeroX);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[5];
	int numeroX;
	lerVet(vet);
	printf("Digite o numero desejado para buscar no vetor: ");
	scanf("%d",&numeroX);
	buscaSequencial(numeroX,vet);	
}
