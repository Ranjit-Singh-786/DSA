#include <iostream>
using namespace std;

// void swap(int x , int y){  //create new variable for parameter
void swap(int &x , int &y){  //use same variable as a parameter
    cout<<"Address of X after passing : "<<&x<<endl;
    cout<<"Address of Y after passing : "<<&y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<"X values : "<<x<<endl;
    cout<<"Y values : "<<y<<endl;

}
int main(){

    int x = 10;
    int y = 20;

    cout<<"Address of X before passing : "<<&x<<endl;
    cout<<"Address of Y before passing : "<<&y<<endl;

    swap(x,y);
    cout<<"Value of Y : "<<y<<endl;
    return 0;
}