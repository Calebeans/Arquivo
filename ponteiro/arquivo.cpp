#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int i;

  cout<< &i<<endl;

  cout<<"Lixo de memoria: "<<i;
 
 
  cout << endl;
  return 0;
}