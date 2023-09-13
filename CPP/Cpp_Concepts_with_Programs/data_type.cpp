// #include <iostream>
// using namespace std;
// int main(){
    // string name;
    // int roll_no;
    // float percentage;
    // double ratio;
    // long 
// }

#include <iostream>
using namespace std;
 
int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
 
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
 
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of short : " << sizeof(short) << endl;

    cout << endl;
// Data type declaration

// string

    string name = "mohan";

// integer
    int a = 10;
    short b = 20;
    long c = 30;
    long long d = 40;

// float
    float e = 3.14f;
    double f = 3.141592;
    long double g = 3.14159265358979L;

// character
    char h = 'a';
    wchar_t i = L'b';

// boolean
    bool l = true;
    bool m = false;


    cout << "Printing all the data types value " << endl;
    cout << "string " << name << endl;
    cout << "integer " << a << endl;
    cout << "short " << b << endl;
    cout << "long " << c  << endl;
    cout << "long  long " << d << endl;

    cout << "float " << e << endl;
    cout << "double " << f << endl;
    cout << "long double "<< g << endl;
    
    cout << "char "<< h  << endl;
    cout << "wchar_t "<< i  << endl;

    cout << "boolean "<< l << endl;
    cout << "boolean "<< m << endl;

    return 0;
}