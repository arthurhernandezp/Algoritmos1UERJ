#include <stdio.h>

int fribonnaci(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return(fribonnaci(n-1) + fribonnaci(n-2));
	}
}

int main(){
	int posicao;
	printf("Digite a posicao do numero da serie de fribonnaci: ");
	scanf("%d",&posicao);
	printf("O numero da posicao %d e: %d",posicao,fribonnaci(posicao));
}
