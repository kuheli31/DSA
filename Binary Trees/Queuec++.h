#ifndef QUEUEC_H
#define QUEUEC_H
#include <iostream>
using namespace std;
class Node
{
public:
    Node* lchild;
    int data;
    Node* rchild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q;  
public:
    Queue()
    {
    	front=rear=-1;
    	size=10;
    	Q=new Node*[size];
	}
	Queue(int size)
	{
		front=rear=-1;
		this->size = size;
		Q=new Node*[this->size];
	}
	void enqueue(Node *x);
	Node *dequeue();
	int isEmpty()
	{
		return front==rear;
	}
	void Display();
};
void Queue::enqueue(Node *x) 
{
    if(rear==size-1)
	{
        cout << "Queue Overflow" << endl;
    } 
	else 
	{
        rear++;
        Q[rear] = x;
    }
}
 
Node* Queue::dequeue() 
{
    Node *x = nullptr;
    if(front==rear)
	{
        cout << "Queue Underflow" << endl;
    } 
	else 
	{
        front++;
        x = Q[front];
    }
    return x;
}
#endif

 
 
