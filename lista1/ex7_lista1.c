/*
7. Faça um programa que implemente uma função recursiva que receba por parâmetro
um número inteiro positivo n e imprima todos os números naturais de 0 a N em ordem
crescente.
*/

#include <stdio.h>
#include <stdlib.h>

void imprimeNumeros(int aux, int n){
	if(aux < n){
		printf("%d ",aux);
		imprimeNumeros(aux+ 1,n);
	}	
}

int main(){
	int n;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	imprimeNumeros(0,n);
	return 0;
}
