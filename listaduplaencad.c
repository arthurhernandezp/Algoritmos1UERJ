// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int info;
    struct no *prox;
    struct no *antes;
}no;

void inicializa_lista(no **E, no **D){
    *E = NULL;
    *D = NULL;
}

int listaVazia(no* E, no* D){
    if(E == NULL && D == NULL) return 1;
    return 0;
}

void inserirDir(int valor, no **E,no **D){
    no* aux;
    aux = (no*) malloc(sizeof(no));
    if(aux != NULL){
        aux->info = valor;
        aux->prox = NULL;
        aux->antes = NULL;
        if(listaVazia(*E,*D)){//primeiro elemento
            *D = aux;
            *E = aux;
        }else{//inserir pela direita
            aux->antes = *D;
            (*D)->prox = aux;
            *D = aux;
        }
    }else{
        printf("\nErro!");
    }
}

void pecorrerEsq(no* E){
        no* aux;
        aux = E;
        while(aux != NULL){
            printf("%d ",aux->info);
            aux = aux->prox;
        }
        printf("\n");
}

void pecorrerDir(no* D){
    no* aux;
    aux = D;
    
    while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->antes;
    }
    printf("\n");
}
void remover(int valor, no **E, no **D){
    no* aux;
    if(!listaVazia(*E,*D)){
        aux = *E;
        //BUSCA ELEMENTO
        while(aux != NULL && aux->info != valor){
            aux = aux->prox;
        }
        if(aux == NULL){
            printf("\nO elemento nao foi encontrado!!");
        }else{
            if(*E == *D){//Unico elemento
                *E = NULL;
                *D = NULL;
            }else{
                if(aux->antes == NULL){//Inicio E
                    *E = aux->prox;
                    (*E)->antes = NULL;
                }
                else{
                    if(aux->prox == NULL){
                        *D = aux->antes;
                        (*D)->prox = NULL;
                    }
                    else{//elemento intermediario
                        no* anterior = aux->antes;
                        no* posterior = aux->prox;
                        anterior->prox = posterior;
                        posterior->antes = anterior;
                    }
                }
            }
            free(aux);
        }
    }else{
        printf("\nLista Vazia!!!!");
    }
}
int main() {
    no *inicioE;
    no *inicioD;
    inicializa_lista(&inicioE,&inicioD);
    inserirDir(5,&inicioE,&inicioD);
    inserirDir(15,&inicioE,&inicioD);
    inserirDir(4,&inicioE,&inicioD);
    pecorrerEsq(inicioE);
    remover(4,&inicioE,&inicioD);
    remover(15,&inicioE,&inicioD);
    remover(5,&inicioE,&inicioD);
    inserirDir(6,&inicioE,&inicioD);
    inserirDir(10,&inicioE,&inicioD);
    inserirDir(1,&inicioE,&inicioD);
    printf("\n");
    pecorrerDir(inicioD);
    remover(10,&inicioE,&inicioD);
    pecorrerDir(inicioD);
    return 0;
}
