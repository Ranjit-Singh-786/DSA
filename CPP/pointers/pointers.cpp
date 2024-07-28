#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int* p = &x;  // sytenx to create int pointer
    cout<<"Address of X : "<<&x<<endl;
    cout<<"Address of X from the pointers: "<<p<<endl;
    cout<<"Address of P pointer : "<<&p<<endl;
    cout<<""<<endl;
    cout<<"value of X using pointers : "<<*p<<endl;  // * is derefrence operator


    return 0;
}