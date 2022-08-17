#include <iostream>

using namespace std;

void ordena(int *p, int *p1, int *p2);

int main(){
    int a= 4, b = 2, c = 6;
    int *p, *p1, *p2;
    p = &a;
    p1 = &b;
    p2 = &c;

    cout << ordena(p,p1,p2);


    return 0;
}

void ordena(int *p, int *p1, int *p2){
    if(*p < *p1 && *p1 < *p2)
        return;
    if(*p1 < *p && *p < *p2)
        return;
    if(*p2 < *p && *p < *p1)
        return;
    if(*p < *p2 && *p2 < *p1)
        return;
    if(*p1 < *p2 && *p2 < *p)
        return;
    if(*p2 < *p1 && *p1 < *p)
        return;
}