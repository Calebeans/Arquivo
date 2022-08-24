#include <iostream>
#define MaxTam 4

using namespace std;

typedef struct TipoItem
{
    int chave;
    char letra;
};

typedef struct TipoLista
{
    TipoItem item[MaxTam];
    int tamanho = 0;
};

void criarLista(TipoLista &lista);
int verificaListaVazia(TipoLista &lista);
int insereLista(TipoLista &lista, TipoItem item);
void imprimeLista(TipoLista &lista);

int main(){
    TipoLista lista;
    TipoItem item;
    item.chave = 7;
    item.letra = 'c';
    criarLista(lista);
    insereLista(lista, item);
    imprimeLista(lista);
    return 0;
}

void criarLista(TipoLista &lista){
    lista.tamanho = 0;
}

int verificaListaVazia(TipoLista &lista){
    if(lista.tamanho == 0)
        return 0;
    return 1;
}

int insereLista(TipoLista &lista, TipoItem item){
    if(lista.tamanho < MaxTam){
        lista.item[lista.tamanho].chave = item.chave;
        lista.item[lista.tamanho].letra = item.letra;
        lista.tamanho++;
        return 1;
    }
    return 0;
}

void imprimeLista(TipoLista &lista){
    for(int i = 0; i < lista.tamanho; i++){
        cout<< lista.item[i].chave<<endl;
        cout<< lista.item[i].letra<<endl;
    }
}