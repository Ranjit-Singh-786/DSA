#include <iostream>
#include <typeinfo>   //it imported to check the type of variable

int main() {
    int i = 42;
    float f = 3.14;
    char c = 'a';
    bool b = true;
    std::string s = "Hello";

    std::cout << "Type of i: " << typeid(i).name() << std::endl;
    std::cout << "Type of f: " << typeid(f).name() << std::endl;
    std::cout << "Type of c: " << typeid(c).name() << std::endl;
    std::cout << "Type of b: " << typeid(b).name() << std::endl;
    std::cout << "Type of s: " << typeid(s).name() << std::endl;



    // type  casting the variable datatype

    double d = 3.14;
    int j = static_cast<int>(d);

    std::cout << "d = " << d << ", j = " << j << std::endl;
    std::cout <<  "type of j after converting " << typeid(j).name() << " and befor " << typeid(d).name() << std::endl;


    std::string l = typeid(j).name();
    // std::cout << typeid(l).name();
    std::cout << l << std::endl;


    return 0;
}
