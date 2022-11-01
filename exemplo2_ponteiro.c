/*
COMO JA ESTÁ PASSANDO PONTEIRO COMO PARAMETROS NAO PRECISA DO & NO SCANF 
PQ JA ESTÁ NO ENDEREÇO 
*/

#include <stdio.h>
void leitura(float *n1, float *n2){
	printf("Digite a primeira nota: ");
	scanf("%f",n1);
	printf("Digite a segunda nota: ");
	scanf("%f",n2);
}
int main(){
	float MEDIA, NOTA1, NOTA2;
	leitura(&NOTA1, &NOTA2);
	MEDIA = (NOTA1 + NOTA2) / 2;
	printf("Media = %.2f",MEDIA);
}
