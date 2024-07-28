#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<< "Programs to reverse string print"<<endl;
    string st = "upflairs";

    // # normal printing 
    for(int i = 0; i<=st.length();i++){
        cout<<st[i];
    }
    cout<<"\n";

    // program - 1st to reverse print 
    int n = st.length()-1;
    for(int i = n; i>=0;i--){
        cout<<st[i];
    }
    cout<<endl;

    // program - 2nd to reverse print  
    int count = st.length();
    for(int i =0 ; i<count; i++){
        cout<<st[count-i-1];
    }
    cout<<endl;

    // program -3rd to reverse print 
    int count2 = size(st);
    for(int i = 0; i<count2/2;i++){
        char temp = st[i];
        st[i] = st[count2 - i - 1];
        st[count2-i-1] = temp;
    }
    cout<<st<<endl;
    
    // program - 4th to print reverse 
    string st2 = "upflairs";
    int start = 0;
    int end = size(st2)-1;

    while(start<end){
        char temp = st2[start];
        st2[start] = st2[end];
        st2[end] = temp;
        ++start;
        --end;
    }
    cout<<st<<endl;

}