#include <stdio.h>
#include <locale.h>
void lerNota(float *n1, float *n2){
	printf("Digite a primeira nota: ");
	scanf("%f",n1);
	printf("Digite a segunda nota: ");
	scanf("%f",n2);
	
}
void calcular_media(float nota1, float nota2, float *m){
	*m = (nota1 + nota2)/2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1;
	float nota2;
	float media = 0;
	int i;
	for(i ==0 ; i < 15; i++){
		lerNota(&nota1,&nota2);
		calcular_media(nota1,nota2,&media);
		printf (" Media do %dº Aluno é: %.2f",i+1,media);
	}
	
	
}
