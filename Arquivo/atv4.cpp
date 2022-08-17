#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    
    arquivo.open("arquivo.txt");

    arquivo << "char --------: " << sizeof(char) << " byte(s)" << endl;
    arquivo << "short -------: " << sizeof(short) << " byte(s)" << endl;
    arquivo << "int ---------: " << sizeof(int) << " byte(s)" << endl;
    arquivo << "long --------: " << sizeof(long) << " byte(s)" << endl;
    arquivo << "float -------: " << sizeof(float) << " byte(s)" << endl;
    arquivo << "double ------: " << sizeof(double) << " byte(s)" << endl;
    arquivo << "long double -: " << __SIZEOF_LONG_DOUBLE__ << " byte(s)" << endl;
    arquivo << "bool --------: " << sizeof(bool) << " byte(s)" << endl;

    arquivo.close();
    return 0;
}