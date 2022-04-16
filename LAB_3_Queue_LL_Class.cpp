#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

class queue{
    private:
    node *front;
    node *rear;
    public:
    queue(){front = NULL; rear = NULL;}
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x){
    node *Q = new node;
    Q->data = x;
    Q->next=NULL;
    if(Q == NULL){
        cout<<"Queue is full.\n";
    }
    else if(front == NULL){
        rear = front = Q;
        cout<<x<<" added.\n";
    }
    else{
        rear->next = Q;
        rear = Q;
        cout<<x<<" added.\n";
    }
}

int queue::dequeue(){
    int x = -1;
    node *temp = front;
    if(front==NULL){
        cout<<"Queue is empty.\n";
    }
    else{
        x = front->data;
        front = front->next;
        free(temp);
        cout<<x<<" removed.\n";
    }
    return x;
}

void queue::display(){
    node *temp = front;
    while(temp != NULL){
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.dequeue();
    q.display();
    return 0;
}