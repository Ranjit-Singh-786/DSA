#include <iostream>
#include <string>
using namespace std;

int main(){
    string st = "Upflairs";

    cout << "string printing " << st<<endl;
    cout << "No of character in string : "<<size(st)<<endl;
    cout << "Size of string : "<<sizeof(st)<<endl;
    cout << "character printing : "<< st[2]<<endl;

    string st2;
    cout << "enter your string "<<endl;
    // cin>> st2;
    getline(cin,st2); // to get input complete line
    cout << st2<<endl;

    if (st2.empty()){
        cout<<"String is empty !";
    }
    else{
        cout << "string is not empty !"<<endl;
    }

    st2.clear();
    cout<<"String after clear "<<st2<<endl;

    string s1,s2;
    cout << "Enter first string to compare"<<endl;
    getline(cin,s1);
    cout << "Enter second string to compare"<<endl;
    getline(cin,s2);
    int match = s1.compare(s2);
    if (match == 0){
        cout <<"String is equal "<<"match score "<<match<<endl;
    }
    else{
        cout<<"string is not equal "<<"match score "<<match<<endl;
    }
    
    //appending string into another
    cout <<"After appending : "<< s1.append(s2);

    return 0;
}