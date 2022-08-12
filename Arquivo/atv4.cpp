#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "char --------: " << sizeof(char) << " byte(s)" << endl;
    cout << "short -------: " << sizeof(short) << " byte(s)" << endl;
    cout << "int ---------: " << sizeof(int) << " byte(s)" << endl;
    cout << "long --------: " << sizeof(long) << " byte(s)" << endl;
    cout << "float -------: " << sizeof(float) << " byte(s)" << endl;
    cout << "double ------: " << sizeof(double) << " byte(s)" << endl;
    cout << "long double -: " << __SIZEOF_LONG_DOUBLE__ << " byte(s)" << endl;
    cout << "bool --------: " << sizeof(bool) << " byte(s)" << endl;
    return 0;
}