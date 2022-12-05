/*
2. Considere que o programa do exercício anterior preencha os valores do vetor de
forma ordenada. Faça uma busca por um valor informado pelo usuário. Utiliza a
busca binária.

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

int buscaBinaria(int *V, int N, int elem){
    int i, inicio, meio, final;
    inicio = 0;
    final = N-1;
    while(inicio <= final){
        meio = (inicio + final)/2;
        if(elem < V[meio])
            final = meio-1;//busca na metade da esquerda
        else
            if(elem > V[meio])
                inicio = meio+1;//busca na metade da direita
            else
                return meio;
    }
    return -1;//elemento não encontrado
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[5];
	int numeroX;
	lerVet(vet);
	printf("Digite o numero desejado para buscar no vetor: ");
	scanf("%d",&numeroX);
	printf("O numero selecionado %d foi encontrado na posição %d de [0..4]",numeroX,buscaBinaria(vet,5,numeroX));	
}
