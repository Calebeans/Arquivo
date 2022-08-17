#include <iostream>

using namespace std;

void ordena(int *p, int *p1, int *p2);

int main(){
    int a= 4, b = 2, c = 6;
    int *p, *p1, *p2;
    p = &a;
    p1 = &b;
    p2 = &c;

    cout<< a << " " << b << " " << c << endl;

    ordena(p,p1,p2);

    cout<< a << " " << b << " " << c << endl;


    return 0;
}

void ordena(int *p, int *p1, int *p2){
    if(*p < *p1 && *p1 < *p2)
        return;
    if(*p < *p1){
        int aux;
        aux = *p;
        *p = *p1;
        *p1 = aux;
    }

    if(*p2 < *p){
        int aux;
        aux = *p2;
        *p2 = *p;
        *p = aux;
    }

    if(*p2 < *p1){
        int aux;
        aux = *p2;
        *p2 = *p1;
        *p1 = aux;
    }
}