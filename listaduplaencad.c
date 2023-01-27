// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
    struct no *ant;
}no;

void constroi(no **E, no **D){
    *E = NULL;
    *D = NULL;
}

int listaVazia(no *E, no *D){
    return E == NULL && D == NULL;
}

int buscaElemento(no *E,int valor){
    no *aux;
    aux = E;
    while(aux != NULL & aux->valor != valor){
        aux = aux->prox;
    }
    if(aux == NULL) return -1;
    else if(aux->valor == valor) return 1;
}

void inserirInicio(no **E, no **D, int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no*));
    aux->valor = valor;
    aux->prox = NULL;
    aux->ant = NULL;
    if(listaVazia(*E,*D)){
        *E = aux;
        *D = aux;
    }else{
        aux->prox = (*E);
        (*E)->ant = aux;
        (*E) = aux;
    }
}

void inserirFinal(no **E, no **D, int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no*));
    aux->valor = valor;
    aux->ant = NULL;
    aux->prox = NULL;
    if(listaVazia(*E,*D)){
        *E = aux;
        *D = aux;
    }else{
        aux->ant = *D;
        (*D)->prox = aux;
        (*D) = aux;
    }
}

void pecorrer(no *E){
    no *aux;
    aux = E;
    while(aux != NULL){
        printf("%d ",aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

no* buscaLDE(no *n,int valor){
    no* aux;
    aux = n;
    while(aux != NULL){
        if(valor == aux->valor){
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}
    
void removerElemento (no **E, no**D,int valor) {
    no *aux;
    if (listaVazia(*E,*D))
        printf("Lista vazia!");
    else{
        aux = buscaLDE(*E,valor);
        if (aux == NULL)
            printf("Elemento não está na lista!");
        else{
            if (*E == *D){//verifica se a lista tem só 1 elemento
                *E = NULL;
                *D=NULL;
            }
            else if (aux->ant == NULL){//verifica se é o primeiro elemento a ser removido
                *E = aux->prox;
                (*E)->ant=NULL;
            }
            else{
                if (aux->prox == NULL) {//verifica se é o ultimo elemento a ser removido
                    *D = aux->ant;
                    (*D)->prox = NULL;
                }
                else {
                    aux->ant->prox = aux->prox;
                    aux->prox->ant = aux->ant;
                }
                free(aux);
            }
        }
    }
}


int main() {
    no *inicioE;
    no *inicioD;
    constroi(&inicioE,&inicioD);
    pecorrer(inicioE);
    inserirInicio(&inicioE,&inicioD,5);
    inserirInicio(&inicioE,&inicioD,10);
    inserirInicio(&inicioE,&inicioD,3);
    inserirFinal(&inicioE,&inicioD,20);
    inserirFinal(&inicioE,&inicioD,4);
    inserirFinal(&inicioE,&inicioD,13);
    inserirInicio(&inicioE,&inicioD,8);
    inserirInicio(&inicioE,&inicioD,7);
    pecorrer(inicioE);
    removerElemento(&inicioE,&inicioD,8);
    removerElemento(&inicioE,&inicioD,7);
    removerElemento(&inicioE,&inicioD,13);
    removerElemento(&inicioE,&inicioD,4);
    removerElemento(&inicioE,&inicioD,5);
    removerElemento(&inicioE,&inicioD,10);
    removerElemento(&inicioE,&inicioD,3);
    removerElemento(&inicioE,&inicioD,20);
    pecorrer(inicioE);
    return 0;
}
