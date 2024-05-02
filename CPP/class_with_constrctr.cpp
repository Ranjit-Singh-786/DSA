// EXAMPLE /ON CLASS WITH CONSTRUCTOR
#include <iostream>
using namespace  std;

class Student{
    public:
    string student_name,branch,city;
    int roll_no;
    public:
    Student(string stu_name,string stu_branch,string stu_city){
        this->student_name = stu_name;
        this->branch = stu_branch;
        this->city = stu_city;
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
    Student stu_obj1("Rohit", "CSE", "Mathura");

    // DYNAMIC OBJECT CREATION 
    Student *stu_obj = new Student("Rohit", "CSE", "Mathura");
    cout<<"student name is : "<<stu_obj->student_name<<endl;
    cout<<"Branch and city : "<<stu_obj->branch<<" "<<stu_obj->city<<endl;

    stu_obj->city = "Agra";
    cout<<"City is changed : "<<stu_obj->city<<endl;
    cout<<endl;
    stu_obj->roll_no = 100;
    cout<<"Updated roll no : "<<stu_obj->roll_no;

    delete stu_obj; //to deallocate memory from heap



    return 0;
}