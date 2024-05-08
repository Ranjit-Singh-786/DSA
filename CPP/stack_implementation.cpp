#include <iostream>
using namespace std;

#define MAX_SIZE 100  //preprocessor directive used for defining constants

class Stack{
    private:
    int top;
    int arr[MAX_SIZE];

    public:
    Stack(){
        top = -1;
    }


    void push(int value){
        if (top == MAX_SIZE-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        arr[++top] = value;
        cout<<"succussfully inserted :"<<value<<endl;
    }


    void pop(){
        if (isEmpty()){
            cout<<"Stack underflow";
        }
        top--;

    }

    int peak(){
        if(isEmpty()){
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }

void display() {
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

};

int main(){
    Stack st;
    st.push(10);
    st.push(15);
    st.push(20);

    cout<<"Your PEAK is : "<<st.peak()<<endl;
    cout<<endl;

    st.pop();
    cout<<endl;
    cout<<"Your PEAK is after Pop operation : "<<st.peak()<<endl;

    cout<<"Traversing data item from stack"<<endl;
    st.display();
    return 0;
}