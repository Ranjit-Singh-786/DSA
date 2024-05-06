#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    cout<<"Printing array "<<endl;
    for(int num:vec){
        cout<<num<<" , ";
    }
    cout<<endl;

    // inserting at end
    vec.push_back(500);
    cout<<"After inserting at end "<<endl;
        for(int num:vec){
        cout<<num<<" , ";
    }
    cout<<endl;


    vec.insert(vec.begin(),500);
        cout<<"After inserting at beging "<<endl;
        for(int num:vec){
        cout<<num<<" , ";
    }
    cout<<endl;

    cout<<"Inserting at the position "<<endl;
    vec.insert(vec.begin()+2,500);
    for(int num:vec){
    cout<<num<<" , ";
    }
    cout<<endl;
    return 0;
}