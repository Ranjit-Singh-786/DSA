//INSERTION IN STATIC
#include <iostream>
using namespace std;

void InsertionElement(int arr[],int& size,int element,int index){
    for(int i =size;i>index;--i){
        arr[i] = arr[i-1];
    }
    arr[index] = element;
    ++size;
}

int main(){
    //static array
    int arr1[10] = {25,14,63,85,96};
    arr1[1] = 500; // it overwrites the value
    // Traversing array 
    cout<<"printing arr1 after insertion :"<<endl;
    for(int num:arr1){
        cout<<num<<" , ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"printing arr2 after insertion "<<endl;
    int arr2[10] = {10,20,30,40,50,60};
    int position = 3;
    int value = 500;
    int n = size(arr2);
    InsertionElement(arr2,n,value,position);
    for(int num:arr2){
        cout<<num<<" , ";
    }
    cout<<endl;



    return 0;
}