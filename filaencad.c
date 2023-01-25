#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int valor;
    struct no *prox;
    
}no;

void constroi(no **n){
    *n = NULL;
}

int listaVazia(no *n){
    return n == NULL;
}

int buscaElemento(no* n, int valor){
    no *aux;
    aux = n;
    while(aux != NULL && aux->valor != valor){
        aux = aux->prox;
    }
    if(aux->valor == valor){
        printf("O valor foi encontrado!!\n");
        return 1;
    }else{
        printf("O valor nao foi encontrado!!\n");
        return 0;
    }
}

void inserirEsquerda(no **n, int valor){
    no *aux;
    aux = (no*) malloc(sizeof(no));
    if(!listaVazia(aux)){
        aux->valor = valor;
        aux->prox = *n;
        *n = aux;
    }
    else{
        printf("\nNao foi possivel inserir!");
    }
}

void removerTodosIguais(no **n, int valor){
    no *ant, *aux;
    aux = *n;
    ant = NULL;
    if(!listaVazia(*n)){
        //procurar pelo nó a remover
        while(aux != NULL){
            if(ant == NULL && aux->valor == valor){//É o primeiro elemento
                *n = aux->prox;
                free(aux);
                aux = *n;
            }
            else{//Não é o primeiro elemento
                if(aux->valor == valor) {
                    ant->prox = aux->prox;
                    free(aux);
                    aux = ant;
                }
            }
            ant = aux;
            aux = aux->prox;
        }
    }
    else{
        printf("\nLista vazia!!!!");
    }
}

void removerPrimeiro(no **n){
    no* aux;
    aux = *n;
    *n = aux->prox;
    free(aux);
}

void removerUltimo(no **n){
    no* aux;
    no* ant;
    if(listaVazia(*n)){
        
    }else{
        aux = (*n)->prox;
        ant = (*n)->prox;
        while(aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = NULL;
    }
}

void pecorrer(no* n){
    no *aux;
    aux = n;
    printf("\n");
    while(!listaVazia(aux)){
        printf("%d ",aux->valor);
        aux = aux->prox;
    }
}

void inserirFinal(no **n, int valor){
    no *novo,*p;
    novo = (no*) malloc(sizeof(no));
    if(novo != NULL){
        novo->valor = valor;
        novo->prox = NULL;
        if(!listaVazia(*n)){
            p = *n;
            while(p->prox != NULL){
                p = p->prox;
            }
            p->prox = novo;
        }else{
            *n = novo;
        }
    }
}

int main() {
    no *inicioE;
    constroi(&inicioE);
    inserirEsquerda(&inicioE,76);
    inserirEsquerda(&inicioE,16);
    inserirEsquerda(&inicioE,16);
    inserirEsquerda(&inicioE,4);
    inserirFinal(&inicioE,16);
    inserirFinal(&inicioE,10);
    inserirFinal(&inicioE,5);
    inserirFinal(&inicioE,16);
    inserirEsquerda(&inicioE,16);
    inserirEsquerda(&inicioE,5);
    inserirEsquerda(&inicioE,16);
    pecorrer(inicioE);
    removerTodosIguais(&inicioE,16);
    pecorrer(inicioE);
    removerTodosIguais(&inicioE,5);
    pecorrer(inicioE);


    return 0;
}
