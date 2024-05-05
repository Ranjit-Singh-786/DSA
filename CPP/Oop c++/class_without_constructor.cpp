// EXAMPLES //ON CLASS WITHOUT CONSTRUCTOR 

#include <iostream>
using namespace std;

class Student{
    public:
    string student_name = "Mohan";
    string student_branch = "cse";
    char section = 'C';
    int roll_no = 24;
    string course,college;

    void display(){
        cout<<"student name is : "<<this->student_name<<endl;
        cout<<"Section : "<<this->section<<"Roll no is : "<<this->roll_no<<endl;
    }

};

int main(){
    Student student_obj;  //creating object
    cout<<"Accessing predefined public variable : "<<student_obj.student_name<<endl;
    cout<<endl;

    // assigning value to the public var and printing
    student_obj.college = "IET AGRA";
    student_obj.course = "Btech";
    cout<<"college and course is : "<<student_obj.college<<" "<<student_obj.course<<"\n";
    cout<<endl;

    // accessing variable through the function 
    student_obj.display();

    return 0;
}