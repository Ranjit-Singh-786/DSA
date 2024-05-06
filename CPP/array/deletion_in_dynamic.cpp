#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {10,20,30,40,50,60,70};
    cout<<"Before deleting "<<endl;
    for (int num:vec){
        cout<<num<<",";
    }
    cout<<endl;

    vec.erase(vec.begin()+2);
    cout<<"After deleting "<<endl;
    for (int num:vec){
        cout<<num<<",";
    }
    return 0;
}
