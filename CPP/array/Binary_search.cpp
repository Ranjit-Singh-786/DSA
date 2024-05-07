// BINARY SEARCH ALGORITHM IMPLEMENTATION
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int &n,int target){
    int left = 0;
    int right = n-1;
    while(left<=right){
    int mid = left +(right-left)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left = mid +1;
        }
        else{
            right = mid-1;

        }
    }
    return -1;
}

int main(){
    int sort_arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = size(sort_arr);
    int target = 40;
    int output;
    output = BinarySearch(sort_arr,n,target);
    if(output!=-1){
        cout<<"Your item present at this location : "<<output<<endl;
    }
    else{
        cout<<"sorry we didnt found your element"<<endl;
        cout<<"output has : "<<output<<endl;
    }
    return 0;
}
