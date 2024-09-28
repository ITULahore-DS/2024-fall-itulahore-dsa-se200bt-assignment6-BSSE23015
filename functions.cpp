#include "functions.h"
Stack::Stack()
{
    top = nullptr;
    count = 0;
}
Stack::~Stack()
{
    clear(); // freeing up all memory
}
bool Stack::isEmpty()
{
    if (top == nullptr) // if top is null stack is empty
    {
        return true;
    }
    return false; // else stack is not empty
}
void Stack::push(int data)
{
    Node *new_Node = new Node;
    if (new_Node == nullptr) // if stack is empty
    {
        cout << "Stack overflow" << endl;
        return;
    }
    new_Node->setData(data); // setting data of newNode
    new_Node->setNext(top);  // setting next of newNode to point on top node
    top = new_Node;          // updating top to recently added node
    count++;                 // increamenting number of nodes
}
void Stack::pop()
{
    if (top == nullptr)
    {
        cout << "Stack underflow" << endl;
        return;
    }
    Node *temp = top;     // node to be deleted
    top = top->getNext(); // updating top to its next node
    delete temp;          // free up space

    --count; // decreament number of nodes
}
int Stack::peek()
{
    if (top == nullptr)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    return top->getData(); // returns top's data
}
int Stack::size()
{
    return count; // returns total number of nodes
}
void Stack::clear()
{
    Node *temp = top;
    while (temp != NULL)
    {
        Node *newtemp = temp->getNext();
        delete temp;    // deleting node
        temp = newtemp; // moving temp to its next node
        count--;
    }
    top = nullptr;
}
void Stack::printStack()
{
    if (top == nullptr)
    {
        cout << "Stack empty" << endl;
        return;
    }
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->getData() << "->"; // displaying data of each node
        temp = temp->getNext();          // moving temp to its next
    }
    cout << "NULL" << endl;
}
Queue::Queue()
{
    iback = nullptr;
    ifront = nullptr;
    count = 0;
}
Queue::~Queue()
{
    Node *temp = ifront;
    while (temp != nullptr) // freeing up queue
    {
        Node *newtemp = temp->getNext();
        delete temp;    // deleting curent node
        temp = newtemp; // moving temp to next node
    }
    ifront = nullptr;
    iback = nullptr;
}
bool Queue::isEmpty()
{
    if (count == 0)
    {
        return true; // returns true if number of node is 0
    }
    return false; // else returns false
}
void Queue::enqueue(int data)
{
    Node *new_Node = new Node;
    if (new_Node == nullptr)
    {
        cout << "Queue overflow" << endl; // check if new_Node is null than queue is full
        return;
    }
    if (ifront == nullptr && iback == nullptr)
    {
        new_Node->setData(data); // if both ifront and iback are null than both points on same node
        ifront = new_Node;
        iback = new_Node;
        count++; // increamenting number of nodes

        return;
    }
    new_Node->setData(data);
    iback->setNext(new_Node);
    iback = new_Node; // iback  points on new_Node
    count++;
}
void Queue::dequeue()
{
    if (count == 0)
    {
        cout << "Queue is already empty" << endl;
        return;
    }
    Node *temp = ifront;
    ifront = ifront->getNext(); // updating ifront to its next
    delete temp;                // delete node
    count--;
}
int Queue::size()
{
    return count;
}
void Queue::printQueue()
{
    if (count == 0)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *temp = ifront;

    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}