#include <iostream>
using namespace std;

void DeletionElement(int arr[],int &size,int index){
    if (index>=size||index<0){
        return;
    }
    for(int i = index;i<size-1;++i){
        arr[i] = arr[i+1];
    }
    --size;

}

int main(){
    int arr[10] = {10,20,30,40,50,60};
    int n = size(arr);
    int delete_position = 2;
    cout<<"Before deleting element"<<endl;
    for(int num:arr){
        cout<<num<<" , ";
    }
    cout<<endl;

    DeletionElement(arr,n,delete_position);
    cout<<"After deleting element"<<endl;
    for(int num:arr){
        if (num==0){
            break;
        }
        cout<<num<<" , ";
        
    }


    return 0;
}