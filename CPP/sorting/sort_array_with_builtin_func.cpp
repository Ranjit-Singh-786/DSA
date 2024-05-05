#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {96,54,74,12,32,58,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array : "<<n <<endl;
    //cout<<arr<<endl;  // return address of first element

      //arr -> address of first element
      //arr + n -> address of last element
    sort(arr,arr+n);

    //Traversing the array 
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}