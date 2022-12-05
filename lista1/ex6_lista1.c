/*
6. Faça uma função recursiva para fazer a multiplicação de dois números (a e b). A
função receberá dois números positivos não nulos a e b e deve retornar o resultado de a × b.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult(int a, int b){
	if(b > 0){
		return (a + mult(a,b-1));
	}
	else{
		return 0;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,resultado;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	resultado = mult(n1,n2);
	printf("O resultado é: %d",resultado);
}
