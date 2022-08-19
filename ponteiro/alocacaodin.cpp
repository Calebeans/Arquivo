#include <iostream>
#include <time.h>

using namespace std;

void preencher(int *v, int n);
int pesquisa(int *v, int n, int a);
void encontra(int *v, int n, int a);

int main()
{
    int tam, num;
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;
    cout << "Informe o numero a ser pesquisado: ";
    cin >> num;

    int *vetor;
    vetor = new int[tam];

    preencher(vetor, tam);
    int a;

    encontra(vetor, tam, num);

    return 0;
}

void preencher(int *v, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % n + 1;
    }
}

int pesquisa(int *v, int n, int a)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (a == v[i])
        {
            cont++;
        }
        return cont;
    }
}

void encontra(int *v, int n, int a){
    a = pesquisa(v, n, a);

    if(a > 0){
        cout<< "Num encontre"<<endl;
    } else{
        cout<<"F"<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
}