#include <iostream>

using namespace std;

int main(){
    float v[10] = {1.0, 2.3, 4.1, 5.6, 6.6, 7.9, 8.7, 9.4, 8.8, 10.5};
    float *p[10];
    for(int i = 0; i < 10; i++){
        p[i] = &v[i];
        cout<< p[i]<< endl;
    }

    
    return 0;
}