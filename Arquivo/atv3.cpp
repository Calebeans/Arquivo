#include <iostream>
#include <fstream>
#define tamanho 3

using namespace std;

void escreve_arquivo()
{
    ofstream arquivo;
    ofstream arquivo1;
    arquivo.open("extra.txt");
    arquivo1.open("soma.dat");

    int a, b, c, result;

    if (!arquivo.is_open())
    {
        cerr << "ERRO! Não foi possível abrir o arquivo.\n";
    }

    if (!arquivo1.is_open())
    {
        cerr << "ERRO! Não foi possível abrir o arquivo.\n";
    }

    cin >> a >> b >> c;

    result = a+b+c;

    arquivo << a << endl << b << endl << c;

    arquivo1 << result;

}

int main(){

    escreve_arquivo();


    return 0;
}