#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node{
public:
int data;
Node* next;

Node(){
    next = NULL;
}
};

//Stack class
class Stack{
private:
Node* top; //Pointer to the top node of the stack

public:
Stack(){
    top = NULL; //Initialize the stack with a null top pointer
}

//push operation: insert an element onto the top of the stack
int push(int value){
    Node* newNode = new Node(); // 1. Allocate memory for the new node
    newNode->data = value; //2. assign value
    newNode->next = top; //3. set the next pointer of the new node to the current top
    top = newNode;
    cout << "Push value: " << value << endl;
    return value;
}

//pop operation: remove the topmost element from the stack
void pop(){
    if (isEmpty()){
        cout << "Stack is empty." << endl;
    }

    Node* temp = top; // Create a temporary pointer to the top mode
}
};