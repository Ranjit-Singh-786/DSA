#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next = nullptr;
    }

};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        head=nullptr;
    }

    void InsertElement(int value){
        Node* newNode = new Node(value);

        if (head == nullptr){
            head = newNode;
            return;
        }
        Node* current = head;

        while(current->next != nullptr){
            current = current->next;
        }
        current->next  = newNode;
    }


    void display(){
        Node* current = head;
        while(current != nullptr){
            cout<<current->data<<"-->";
            current = current->next;
        }

    }

    void RemoveNode(int position){
        // #first condition for empty linkedlist 
        if (head==nullptr){
            return;
        }

        // if deleting element itself head 
        if (position == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for (int i = 0; current != nullptr && i < position -1; ++i){
            current = current->next;
        }
        //  checking condition for last point, because we will remove only mid points by position 

        if (current->next == nullptr || current == nullptr){
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;   
        delete temp;
    }

};


int main(){

    LinkedList list;
    list.InsertElement(44);
    list.InsertElement(84);
    list.InsertElement(74);
    list.InsertElement(24);
    list.InsertElement(42);

    // calling display function 
    list.display();

    list.RemoveNode(2);
    cout<<endl;
    list.display();

    return 0;
}