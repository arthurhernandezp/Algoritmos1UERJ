#include <stdio.h>
int pot(int x, int n){
	if(n >= 0){
		if(n == 0){
			return (1);
		}
		return( x * pot(x,n-1));
	}	
}

void lerNumeros(int *x, int *n){
	printf("Digite o valor de x: ");
	scanf("%d",x);
	printf("Digite o valor de n: ");
	scanf("%d",n);
}
int main(){
	int x;
	int n;
	lerNumeros(&x,&n);
	printf("Potencia  de %d elevado a %d e: %d",x,n,pot(x,n));
}
