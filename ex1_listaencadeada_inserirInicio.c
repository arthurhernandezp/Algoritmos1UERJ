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
    printf("\n");
    while(!listaVazia(aux)){
        printf(" %d ",aux->info);
        aux= aux->prox;
    }
    printf("\n");
}

void inserirFinal( no** n,int valor){
    no* aux, *p;
    aux = (no*) malloc(sizeof(no));
    if(aux != NULL){
        aux->info = valor;
        aux->prox = NULL;
        if(!listaVazia(*n)){
            p = *n;
            while(p->prox != NULL){
                p = p->prox;
            }
            p->prox = aux;
        }
        else{
            *n = aux;
        }
    }
}

void removerElemento(no** n, int valor){
    no *ant, *aux;
    aux = *n;
    ant = NULL;
    if(!listaVazia(n)){
        //procurar pelo nó a remover
        while(aux != NULL && aux->info != valor){
            ant = aux;
            aux = aux->prox;
        }
        if(aux == NULL) {
            printf("\nO elemento não foi encontrado!!!\n");
        }
        else{//encontrei o elemento
            if(ant == NULL){//É o primeiro elemento
                *n = aux->prox;
            }
            else{//Não é o primeiro elemento
                ant->prox = aux->prox;
            }
            
            printf("\nRemovido: %d\n",aux->info);
            free(aux);
        }
    }
    else{
        printf("\nLista vazia!!!!");
    }
}

int main()
{
    no *inicioL;
    inicializarLista(&inicioL);
    inserirInicio(&inicioL,2);
    inserirInicio(&inicioL,5);
    inserirInicio(&inicioL,4);
    inserirInicio(&inicioL,35);
    inserirInicio(&inicioL,15);
    inserirInicio(&inicioL,44);
    pecorrer(inicioL);
    inserirFinal(&inicioL,7);
    inserirFinal(&inicioL,10);
    inserirInicio(&inicioL,1);
    pecorrer(inicioL);
    inserirInicio(&inicioL,9);
    pecorrer(inicioL);
    removerElemento(&inicioL,4);
    pecorrer(inicioL);

    printf("\nInfo inicio: %d",inicioL->info);
    
    return 0;
}
