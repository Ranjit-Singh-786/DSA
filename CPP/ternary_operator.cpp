#include <iostream>
using namespace std;
int main(){
    int  student_age;
    cout << "Enter the age :- " << endl;
    cin >> student_age;

    // Ternary operator program
    
    string result = (student_age >=18)?"adult":"bachha";
    cout << result;

}