#include <iostream>
using namespace std;


int linear_search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Target is founded on this location : "<<i<<"th"<<endl;
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {25,41,52,63,96,85,74,45,96,98,78,84};
    int n = size(arr);
    int target,output_position;
    cout<<"Please target element : ";
    cin>>target;
    cout<<"we are finding "<<target<<endl;
    output_position = linear_search(arr,n,target);

    // Output identification
    if (output_position != -1){
        cout<<"Your item is present in array : "<<arr[output_position]<<endl;
    }

    else{
        cout<<"Sorry we did,nt found !"<<endl;
    }

    return 0;
}