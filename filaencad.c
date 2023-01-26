/*
1. Escreva uma função que calcule a soma das chaves dos nós de uma lista encadeada.
2. Faça um programa que implemente uma função que calcule o número de nós de uma lista
encadeada.
3. Considere uma lista encadeada de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores maiores do que n.
4. Implemente uma função que retorne o valor armazenado no último nó de uma lista
encadeada de números inteiros.
5. Considere listas de valores inteiros e implemente uma função que dada uma lista
encadeada e um valor inteiro n, retire da lista todas as ocorrências de n retornando a lista
resultante. Ao final, o programa deve imprimir a lista resultante.
6. Implemente uma função que dados um valor e uma posição, a função insere o elemento
valor na posição pos da lista simplesmente encadeada. Para isso, um novo nó deve ser
alocado e ligado aos demais. O valor de pos é um número, que ser for 2, por exemplo, indica
que o novo nó alocado será o segundo nó da lista.
*/
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
            if(aux->valor == valor) {
                if(ant == NULL){
                    *n = aux->prox;
                    free(aux);
                    aux = *n;
                }else{
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

int somaNos(no *n){
    int somaTotal = 0;
    no *aux;
    aux = n;
    while(aux != NULL){
        somaTotal += aux->valor;
        aux = aux->prox;
    }
    return somaTotal;
}

int calculoNos(no *n){
    int totalnos = 0;
    no *aux;
    aux = n;
    while(aux != NULL){
        totalnos++;
        aux = aux->prox;
    }
    return totalnos;
}

int procuraMaior(no *n, int valor){
    int qtdMaior = 0;
    no* aux;
    aux = n;
    while(aux != NULL){
        if(aux->valor > valor) qtdMaior++;
        aux= aux->prox;
    }
    return qtdMaior;
}


int main() {
    no *inicioE;
    printf("Antes: %d\n",listaVazia(inicioE));
    constroi(&inicioE);
    printf("Depois: %d\n",listaVazia(inicioE));
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
    printf("\nA soma dos nos e: %d",somaNos(inicioE));
    printf("\nNumero de nos e: %d",calculoNos(inicioE));
    printf("\nA quantidade de elementos maior que %d e: %d",10,procuraMaior(inicioE,10));
    removerTodosIguais(&inicioE,16);
    pecorrer(inicioE);
    printf("\nA soma dos nos e: %d",somaNos(inicioE));
    printf("\nNumero de nos e: %d",calculoNos(inicioE));
    printf("\nA quantidade de elementos maior que %d e: %d",10,procuraMaior(inicioE,10));

    removerTodosIguais(&inicioE,5);
    pecorrer(inicioE);
    printf("\nA soma dos nos e: %d",somaNos(inicioE));
    printf("\nNumero de nos e: %d",calculoNos(inicioE));   
    printf("\nA quantidade de elementos maior que %d e: %d",10,procuraMaior(inicioE,10));


    return 0;
}
