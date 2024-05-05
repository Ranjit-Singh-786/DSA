// EXAMPLE /ON CLASS WITH CONSTRUCTOR
#include <iostream>
using namespace  std;

class Student{
    public:
    string student_name,branch,city;
    int roll_no,postal_code;
    public:
    Student(string stu_name,string stu_branch,string stu_city,int pin_code){
        this->student_name = stu_name;
        this->branch = stu_branch;
        this->city = stu_city;
        postal_code = pin_code;

    }

    // without this keyword (No Impact this keyword)

    //     Student(string stu_name,string stu_branch,string stu_city){
    //     student_name = stu_name;
    //     branch = stu_branch;
    //     city = stu_city;
    // }

    void display(){
        cout<<this->student_name<<"and roll no. is : "<<this->roll_no<<endl;
    }

};



int main(){
    Student stu_obj1("Rohit", "CSE", "Mathura",281307);
    //ACCESSING VALUE USING OBJECT
    cout<<"student name is : "<<stu_obj1.student_name<<endl;
    cout<<"Postal code is : "<< stu_obj1.postal_code<<endl;

    // ASSIGNING VALUE TO THE PUBLIC VARIABLE, WITHOUT CONSTRUCTOR DIRECT
    stu_obj1.roll_no = 501;
    cout<<"Roll no is : "<<stu_obj1.roll_no<<endl;

    // DYNAMIC OBJECT CREATION 
    Student *stu_obj2 = new Student("Rohit", "CSE", "Mathura",281307);
    cout<<"student name is : "<<stu_obj2->student_name<<endl;
    cout<<"Branch and city : "<<stu_obj2->branch<<" "<<stu_obj2->city<<endl;

    stu_obj2->city = "Agra";
    cout<<"City is changed : "<<stu_obj2->city<<endl;
    cout<<endl;
    stu_obj2->roll_no = 100;
    cout<<"Updated roll no : "<<stu_obj2->roll_no;

    delete stu_obj2; //to deallocate memory from heap



    return 0;
}