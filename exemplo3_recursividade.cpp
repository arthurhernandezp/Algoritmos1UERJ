/*Serie de fibonnaci com recursividade*/
#include <stdio.h>

int fibonnaci(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return(fibonnaci(n-1) + fibonnaci(n-2));
	}
}

int main(){
	int posicao;
	printf("Digite a posicao do numero da serie de fibonnaci: ");
	scanf("%d",&posicao);
	printf("O numero da posicao %d e: %d",posicao,fibonnaci(posicao));
}
