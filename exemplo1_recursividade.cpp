#include <stdio.h>
int fatorialc ( int n )
{
	if(n ==0){
		return 1;
	}
	else{
		return(n * fatorialc(n-1));
	}
}

int main(){
	int fatorial;
	printf("Digite o numero para fatorar: ");
	scanf("%d",&fatorial);
	
	printf("O fatorial de %d e: %d",fatorial,fatorialc(fatorial));
}
