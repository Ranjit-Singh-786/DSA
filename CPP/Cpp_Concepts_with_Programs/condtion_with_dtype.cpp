#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int mark = 10;
    bool gender = true;

    if (typeid(mark)==typeid(int)){
        cout << "This is an ineteger";
    }
    else{
        cout << " Not an  integer";
    }

    cout << "For boolean condition" << endl;


    if (typeid(gender) == typeid(bool)){
        cout << "This is Bool";
    }
    else{
        cout << "This is not Bool";
    }

    return 0;
}