/*
5. Faça um programa que leia um número e gere todos os números primos entre 1 e
este número fornecido, exibindo-os na tela. O programa deve ter uma sub-rotina que
determina se um número é primo ou não.
*/
#include <stdio.h>
#include <stdlib.h>

lerPrimos(int n){
	if(n > 0){
		int totalDivs = 0;
		int i = 0; 	
		for(i = 1;i <= n;i++){
			if(n % i == 0){
				totalDivs++;
			}
		}
		if(totalDivs == 2) printf("%d ", n);
		lerPrimos(n-1);	
	}
	else{
		return 0;
	}
	
}


int main(){
	int n;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	lerPrimos(n);
}
