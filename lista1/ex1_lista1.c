/*1. Faça um programa para ler um conjunto de números reais, armazenando-o em vetor e
calcular o quadrado das componentes deste vetor, armazenando o resultado em outro
vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void salvaNumero(float vet1[],float vet2[]) {
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero: ");
		scanf("%f",&vet1[i]);
		vet2[i] = vet1[i] * vet1[i];
	}
}

void imprimeConjunto(float vet1[], float vet2[]) {
	printf("Primeiro conjunto: ");
	for(int i = 0; i < 10; i++) {
		printf("%.f ",vet1[i]);
	}
	printf("Segundo conjunto: ", endl);
	for(int j = 0; j < 10; j++) {
		printf("%.f ",vet2[j]);
	}
}

int main() {
	float vet[10];
	float quadVet[10];
	salvaNumero(vet,quadVet);
	imprimeConjunto(vet, quadVet);

}
