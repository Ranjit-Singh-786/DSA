#include <iostream>
#include <typeinfo>   //it imported to check the type of variable

int main() {
    short short_int = 2;
    int i = 42;
    float f = 3.14;
    char c = 'a';
    bool b = true;
    std::string s = "Hello";
    double d = 101.25;
    long l = 201.25;
    long long ll = 501.2545;

    std::cout<< "Data Type printing"<<std::endl;
    std::cout<< std::endl;
    std::cout << "Type of short_int : "<< typeid(short_int).name()<<std::endl;
    std::cout << "Type of i: " << typeid(i).name() << std::endl;
    std::cout << "Type of f: " << typeid(f).name() << std::endl;
    std::cout << "Type of c: " << typeid(c).name() << std::endl;
    std::cout << "Type of b: " << typeid(b).name() << std::endl;
    std::cout << "Type of s: " << typeid(s).name() << std::endl;
    std::cout << "Type of d: " << typeid(d).name()<<std::endl;
    std::cout << "Type of l: " << typeid(l).name()<<std::endl;
    std::cout << "Type of ll: " << typeid(ll).name()<<std::endl;

    (int) i;
    std::cout<<"Type of i after type cast : "<<typeid(i)<<std::endl;




    return 0;
}
