#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    cout << "Welcome to assignment 6 " << endl;
    cout << "Enter task number to run" << endl;
    cout << "Enter 1:Stack Functionalities" << endl;
    cout << "Enter 2:Queue Functionalities" << endl;
    int answer;
    cin >> answer;
    switch (answer)
    {
    case 1:
    {
        Stack myStack;
        cout << "Check Stack it should be empty right now :" << endl;
        cout << myStack.isEmpty() << endl;

        // Push elements onto the stack
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);

        // Ensure the stack is not empty
        cout << "Check Stack it should not be empty right now :" << endl;
        cout << myStack.isEmpty() << endl;
        cout << "Displaying Stack :" << endl;
        myStack.printStack();

        cout << "Poping out an element from stack : " << endl;

        myStack.pop();
        cout << "Displaying Stack after poping :" << endl;
        myStack.printStack();
        cout << "Clearing out all stack " << endl;
        myStack.clear();
        cout << "Displaying Stack after clearing :" << endl;
        myStack.printStack();
        break;
    }

    case 2:
    {
        Queue myQueue;
        cout << "Check Queue it should be empty right now :" << endl;
        cout << myQueue.isEmpty() << endl;
        myQueue.enqueue(10);
        myQueue.enqueue(20);
        myQueue.enqueue(30);
        cout << "Check Queue it should not be empty right now :" << endl;
        cout << myQueue.isEmpty() << endl;
        cout << " Displaying Queue :" << endl;
        myQueue.printQueue();
        cout << "Size of queue : " << myQueue.size() << endl;
        cout << "Dequeue an element from queue :" << endl;
        myQueue.dequeue();
        myQueue.printQueue();
        cout << "Size of queue after dequeueing: " << myQueue.size() << endl;
        break;
    }
    default:
    {
        cout << "Enter valid task number" << endl;
        break;
    }
    }

    return 0;
}