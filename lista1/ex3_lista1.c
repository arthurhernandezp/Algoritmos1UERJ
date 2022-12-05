/*3. Elabore um programa que leia vários registros de animais contendo os dados: nome,
raça, data de nascimento e sexo. Os registros devem ser lidos enquanto o usuário desejar. O
máximo de animais cadastrados é 50. Ao final, todos os registros devem ser impressos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 2

typedef struct data{
	int d;
	int m;
	int ano;
}data;

typedef struct registroAnimal{
	char nome[10];
	char raca[10];
	char sexo[2];
	data nasci;
	
}registroAnimal;


void lerDados(registroAnimal listaTotal[]){
	int i;
	for(i = 0; i < max; i++){
		printf("Digite o nome do animal: ");
		fgets(listaTotal[i].nome,10,stdin);
		printf("Digite a raca do animal: ");
		fgets(listaTotal[i].raca,10,stdin);
		printf("Digite o sexo do animal: ");
		fgets(listaTotal[i].sexo,2,stdin);
		printf("Digite o nascimento -  dia  mes  ano: ");
		scanf("%d",&listaTotal[i].nasci.d);
		scanf("%d",&listaTotal[i].nasci.m);
		scanf("%d",&listaTotal[i].nasci.ano);
	    fflush(stdin);
	}
}

void imprimirDados(registroAnimal listaTotal[]){
	int i = 0;
	for (i = 0; i < max; i++){
		printf("\n%dº registro",i+1);
		printf("\n Nome: %s Raca: %s Sexo: %s \nNascimento: %d/%d/%d",
		listaTotal[i].nome,listaTotal[i].raca,listaTotal[i].sexo,listaTotal[i].nasci.d,listaTotal[i].nasci.m,listaTotal[i].nasci.ano);
	}
}

int main(){
	registroAnimal listaTotal[max];
	printf("\n---------- Cadastro do animal -----------\n\n\n");
	lerDados(listaTotal);
	imprimirDados(listaTotal);
}
