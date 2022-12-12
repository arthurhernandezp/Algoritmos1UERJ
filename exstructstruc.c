/*
Exercício
Utilizando as funcionalidades trabalhadas sobre listas sequenciais, faça um programa para
gerenciar os dados dos alunos de uma turma. A capacidade máxima de alunos é 30 e os
dados a serem armazenados são: matrícula, nome, cpf, telefone. Você deve apresentar um
menu de opções com as funcionalidades disponibilizadas. Considere que a lista não
armazena os dados de modo ordenado.
Exemplo:
*** Sistema de alunos ***
1- Cadastrar aluno
2- Buscar aluno pela matrícula
3- Exibir os dados dos alunos
4- Remover um aluno
5- Sair
*/

#include <stdio.h>
#define MAX 30
#include <string.h>
typedef struct dadosAluno{
	int matricula;
	char nome[10];
	int cpf;
	int telefone;
}dadosAluno;

typedef struct listaAlunos{
	dadosAluno lista[MAX];
	int n;
}listaAlunos;

void constroi(listaAlunos *L){
	L->n = 0;
}

int tamanhoLista(listaAlunos L){
	return L.n;
}

int buscaPosicao(listaAlunos L, int m){
	int i = 0;
	while(i < L.n){
		if(L.lista[i].matricula == m){
			return i;
		}
		i++;
	}
	return -1;
}

void inserirAluno(listaAlunos *L){
	int m;
	if(L->n < MAX){
 		printf("Digite o numero da matricula: ");
		scanf("%d",&m);
		if(buscaPosicao(*L,m) != 1){
			L->lista[L->n].matricula = m;
			printf("Digite o cpf do aluno: ");
			scanf("%d",&L->lista[L->n].cpf);
			printf("Digite o telefone do aluno: ");
			scanf("%d",&L->lista[L->n].telefone);
			printf("Digite o nome do aluno: ");
			fgets(L->lista[L->n].nome,10,stdin);
		}
	}	
}

void buscaAluno(listaAlunos L,int m){
	if(buscaPosicao(L,m) != -1){	
		printf("\nNome: %s",L.lista->nome);
		printf("\nMatricula: %c",L.lista->matricula);
		printf("\nCpf: %c",L.lista->cpf);
	}
}



int main(){
	listaAlunos lista;
	int escolha, matricula ;
	constroi(&lista);
	while(escolha != 5){
	printf("\n*** Sistema de alunos *** \n1- Cadastrar aluno \n2- Buscar aluno pela matrícula \n3- Exibir os dados dos alunos \n4- Remover um aluno \n5- Sair\n");
	scanf("%d",&escolha);
	
		switch(escolha){
			case 1:	
				inserirAluno(&lista);
			break;
			case 2:
				printf("Digite a matricula: ");
				scanf("%d",&matricula);
				buscaAluno(lista,matricula);
			break;
		}
	}
}
