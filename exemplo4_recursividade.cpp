#include <stdio.h>

int main(){
	int posicao;
	printf("Digite a posicao do numero da serie de fibonacci: ");
	scanf("%d",&posicao);
	int numeroFinal = 1;
	int numeroAnterior =1;
	if(posicao != 1 || posicao != 2 ){
		for(int i = 2; i < posicao;i++){
			numeroFinal = numeroFinal + numeroAnterior;
			numeroAnterior = numeroFinal - numeroAnterior;
		
		}	
	}

	else{
		printf("1");
	}
	printf("Numero da posicao %d e: %d",posicao, numeroFinal);

}
