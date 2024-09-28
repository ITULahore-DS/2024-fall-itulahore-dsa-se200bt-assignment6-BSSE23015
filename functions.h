#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node()
    {
        data = 0;
        next = nullptr;
    }

    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }

    ~Node()
    {
    }

    void setNext(Node *nextNode)
    {
        this->next = nextNode;
    }
    Node *getNext()
    {
        return this->next;
    }
    void setData(int dataValue)
    {
        this->data = dataValue;
    }
    int getData()
    {
        return this->data;
    }
};
class Stack
{
    Node *top;
    int count;

public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};
class Queue
{
    Node *iback;
    Node *ifront;
    int count;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();
};
#endif
