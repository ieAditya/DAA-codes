#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue()
    {
        size = 10;
        front = rear = -1;
        Q = new int[size];
    }
    Queue(int size)
    {
        this->size = size;
        front = rear = -1;
        Q = new int[this->size];
    }
    void enqueue();
    int dequeue();
    void display();
};

void Queue::enqueue()
{
    if (rear == size - 1)
    {
        cout << "Queue is full.\n";
    }
    else
    {
        int data;
        cout << "Enter the data to add to the queue : ";
        cin >> data;
        rear++;
        Q[rear] = data;
        cout << data << " added.\n\n";
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        front++;
        x = Q[front];
        cout << x << " removed.\n\n";
    }
    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << "|" << Q[i] << "|\n";
    }
}

int main()
{
    Queue q[5];
    q->enqueue();
    q->enqueue();
    q->enqueue();
    q->enqueue();
    q->dequeue();
    q->display();
    return 0;
}