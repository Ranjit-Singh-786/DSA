#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age :- " << endl;
    cin >>age;
    if (age >=18){
        cout << "you can vote " << endl;
    }
    else if (age <=5)
    {
        cout << "your age is not eligible " << endl;
    }
    
    else{
        cout << "you can not vote " << endl;
    }

    // conditional block with logical operator

    if ((age >= 15) && (age <= 20)) {
        cout << "need 3 years for voting";
    } else {
        cout << "I don't know" << endl;
    }

    cout << "program finished " << endl << "Thank you ";
    return 0;
}