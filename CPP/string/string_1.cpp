#include <iostream>
#include <string>
using namespace std;

int main(){
    string st = "Upflairs";

    cout << "string printing " << st<<endl;
    cout << "No of character in string : "<<size(st)<<endl;
    cout << "Size of string : "<<sizeof(st)<<endl;
    cout << "character printing : "<< st[2]<<endl;
    cout << "Substring from string : "<<st.substr(0,3)<<endl;
    
    //string reversing printing program - 1
    int n = st.length();
    cout<<"no of char in str : "<<n<<endl;
    cout<<endl;
    cout << "Reversed string by program-1"<<endl;
    for(int i=n-1;i>=0;--i){
        cout<<st[i];
    }
    cout<<endl;

    //string reversing printing program - 2
    string  str = "upflairs";
    for(int i =0;i<n/2;i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;

    }
    cout<< "String reversed by progr-2 : "<<str<<endl;
    //string reversing printing program - 3
    int start = 0;
    int end = st.length()-1;
    while(start<end){
        char temp = st[start];
        st[start] = st[end];
        st[end] = temp;
        ++start;
        --end;
    }
    cout<<"Reversed string by progr-3 :"<<st<<endl;


    cout<<endl;

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