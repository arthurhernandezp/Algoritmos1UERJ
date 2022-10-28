#include <stdio.h>
void troca(int *x,int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
    int a, b;
    printf("Informe dois números: ");
    scanf("%d %d", &a, &b);
    printf("Antes: %d - %d\n",a,b);
    //troca
    troca(&a, &b);
    printf("Após: %d - %d\n",a,b);
}
