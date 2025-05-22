#include <iostream>

using namespace std;

//Node class representing a single node in the linked list
class Node
{
public:
int data;
Node* next;

Node(){
    next = NULL;
}
};

//Stack class
class Stack
{
private:
Node* top; //Pointer to the top node of the stack

public:
Stack()
{
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
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
    }

    Node* temp = top; // Create a temporary pointer to the top mode
    top = top->next; //Update the top pointer to the next node
    cout << "Popped value: " << top->data << endl;
    delete temp;
}

//peek/top operation: Retrieve the value of the topmost element without removing
void peek()
{
    if (top == NULL)
    {
        cout << "List is empty." << endl;
    }
    else
    {
        Node *current = top;
        while (current != NULL)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
        cout << endl;
    } // return the value of the top node
}

// IsEmpty operation: Check if the stack is empty
bool isEmpty()
{
    return top == NULL; //return true if the top pointer is NULL, indicating an Empty Stack
}
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the enterd value onto the stack
            break;
        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); //pop the top element from the stack
            }
            else
            {
                cout << "Stack is empty. cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek(); //get the value of the top element
            }
            else
            {
                cout << "Stack is empty. No top value." << endl;
            }
            break;
            
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}