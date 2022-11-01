#include <stdio.h>

void funcao(int n){
	if(n == 0){
		printf("zero");
	}
	else{
		printf("%d",n);
		funcao(n-1);
	}
}

int main(){
	int n;
	printf("Digite o numero: ");
	scanf("%d",&n).
	funcao(n);
}
