#include <stdio.h>
#include <locale.h>
#include <string.h>
#define max 5

typedef struct data{
	int d;
	int m;
	int ano;
}data;
typedef struct produto{
	int cod, qtde;
	float pCompra, pVenda;
	char nome[30];
	data dtVal;
}produto;
//Leitura  string em C "scanf" 30 > tamanho stdin > teclado 

int main(){
	produto prod[max];
	int count;
	for(count =0; count < max;count++){
		printf("Informe o codigo do produto: ");
		scanf("%d",&prod[count].cod);
		fflush(stdin);
		printf("Informe o nome do produto: ");
		fgets(prod[count].nome,30,stdin);
		printf("Informe o preço de compra do produto: ");
		scanf("%f",&prod[count].pCompra);	
		printf("Informe o preço de venda do produto: ");
		scanf("%f",&prod[count].pVenda);
		printf("Informe a quantidade de produtos: ");
		scanf("%f",&prod[count].pCompra);
	}	
}
