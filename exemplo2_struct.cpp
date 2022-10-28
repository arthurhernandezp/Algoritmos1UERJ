#include <stdio.h>
#define max 4
typedef struct fichaAluno{
	char nome[10];
	int matricula;
	float nota[4];
	float media;
}aluno;

void lerNotas(float nota[]){
	for(int i = 0; i < max; i++){
		printf("Digite a nota: ");
		scanf("%f",&nota[i]);
	}
}

void calcular_media(float nota[],float *media){
	float somaTotal =0;
	for(int i = 0; i < max; i++){
		somaTotal = somaTotal + nota[i];
	}
	*media = (somaTotal)/max;
}

int main(){
	int count;
	fichaAluno aluno[max];
	for(count = 0; count < max; count++){
		printf("Digite o Nome do aluno: ");
		fgets(aluno[count].nome,10,stdin);
		printf("Digite a Matricula do aluno: ");
		scanf("%d",&aluno[count].matricula);
		lerNotas(aluno[count].nota);
		calcular_media(aluno[count].nota, &aluno[count].media);
		fflush(stdin);
		
	}

}
