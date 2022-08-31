#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void criarListaVazia (TipoLista *lista);
bool verificaListaVazia (TipoLista *lista);
void inserePrimeiroElemento(TipoLista *lista, TipoItem *item);

typedef struct TipoItem
{
    int id;
    char nome[82];
} TipoItem;

typedef struct TipoElemento* Apontador;

typedef struct TipoElemento
{
    TipoItem item;
    struct TipoElemento* prox;
} TipoElemento;

typedef struct TipoLista
{
    Apontador primeiro;
    Apontador ultimo;
} TipoLista;

int main(){


    return 0;
}

void criarListaVazia (TipoLista *lista){
    lista->primeiro = new TipoElemento;
    lista->ultimo = lista->primeiro;
    lista->ultimo->prox = NULL; 
}

bool verificaListaVazia (TipoLista *lista){
    return lista->primeiro == lista->ultimo;
}

void inserePrimeiroElemento(TipoLista *lista, TipoItem *item){
    Apontador  aux;
    aux = lista->primeiro->prox;
    lista->primeiro->prox = new TipoElemento;
    lista->primeiro->prox->prox = aux;
    lista->primeiro->prox->item = *item;
    lista->ultimo = lista->primeiro->prox;
}

void pecorreLista (TipoLista *lista, TipoItem *item){
    
}

void insereListaAposElemento(TipoLista *lista, TipoItem item, Apontador x){
    Apontador aux;
    aux = lista.
}