#include<iostream>
using namespace std;

int stack[4], top = -1, item;

void push()
{
    if(top == 3)
    {
        cout << "Stack overflow!!" << endl;
    }
    else
    {
        cout << "Enter the item you want to push into the stack: ";
        cin >> item;
        top = top + 1;
        stack[top] = item;
        cout << "The item is inserted in the stack!!" << endl;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        item = stack[top];
        top = top - 1;
        cout << "The deleted item is: " << item << endl;
    }
}

void peek()
{
    if(top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "The top element is: " << stack[top] << endl;
}

void display()
{
    if(top == -1)
    {
        cout << "Stack is empty. Nothing to display" << endl;
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            cout << "Element " << i << " : " << stack[i] << endl;
        }
    }
}

int main()
{
    int choice;

    cout << "*****MAIN MENU*****";
    cout << "\n1. PUSH ";
    cout << "\n2. POP ";
    cout << "\n3. PEEK";
    cout << "\n4. DISPLAY ";
    cout << "\n5. EXIT";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: return 0;
        default: cout << "INVALID CHOICE";
    }

    return 0;
}