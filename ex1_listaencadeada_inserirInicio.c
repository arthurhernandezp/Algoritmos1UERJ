/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}no;

void inicializarLista(no **n){
    *n = NULL;
}

int listaVazia(no *n){
    return n == NULL;
}

void inserirInicio(no **n,int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no));
    if(!listaVazia(aux)){
        aux->info = valor;
        aux->prox = *n;
        *n = aux;
    }
    else{
        printf("Nao foi possivel inserir");
    }
    
}

void pecorrer(no *n){
    no* aux;
    aux = n;
    while(!listaVazia(aux)){
        printf(" %d ",aux->info);
        aux= aux->prox;
    }
}

int main()
{
    no *inicioL;
    inicializarLista(&inicioL);
    printf("%d\n",listaVazia(inicioL));
    printf("Hello World\n");
    inserirInicio(&inicioL,2);
    inserirInicio(&inicioL,5);
    inserirInicio(&inicioL,4);
    inserirInicio(&inicioL,35);
    inserirInicio(&inicioL,15);
    inserirInicio(&inicioL,44);
    pecorrer(inicioL);
    printf("\nInfo inicio: %d",inicioL->info);
    return 0;
}
