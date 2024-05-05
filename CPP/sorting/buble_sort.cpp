// BUBBLE SORT 
#include <iostream> 
using namespace std;

void Buble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        for(j+1; j<n;j++){
            int temp=0;
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

int main(){
    int arr[] = {25,20,21,36,10};
    int n = size(arr);
    //Traversing befor sorting
    cout<<"Unsorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }

    Buble_sort(arr,n);
    cout<<endl;
    
    //Traversing after sorting
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}