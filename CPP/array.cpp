#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // int arr[4] = {1,2,3,4};
    // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    // cout<<arr<<endl; //return address
    // cout<<typeid(decltype(arr)).name(); // return datatype

    // cout<<"Array traversing"<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<endl;
    // }


    // int arr[] = {2,8,4,5,6,9,8,5,2};
    // To calculate the size of array 
    // int no_element = sizeof(arr)/sizeof(arr[0]);
    // int element_count = size(arr);
    // cout<<"Array size is : "<<no_element<<endl;
    // cout<<"Array size is : "<<element_count<<endl;
    // cout<<"Traversing Array using while loop"<<endl;
    // int i = 0;
    // while(i<size(arr)){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

// 2D ARRAY 
    int arr_2D[2][3] = {
        {4,5,6},
        {1,2,3}
    };

    int arr[3] = {5,4,6};
    cout<<"Size of 1D array : "<<size(arr)<<endl;
    cout<<"Size of 2D array : "<<size(arr_2D)<<endl;
    cout<<"Size of 1D from 2D "<<size(arr_2D[1]);
    cout<<endl;

    // 2D Array traversing

    for(int i=0;i<size(arr_2D);i++){
        for(int j=0;j<size(arr_2D[i]);j++){
            cout<<"Array item "<<i<<","<<j<<" "<<arr_2D[i][j]<<endl;
        }
    }



    return 0;
}