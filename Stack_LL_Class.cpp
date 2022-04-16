#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Stack{
    private:
    Node *top;
    public:
    Stack(){top = NULL;}
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x){
    Node *t = new Node;
    if(t==NULL){
        cout<<"Stack overflow."<<endl;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
        cout<<x<<" pushed."<<endl;
    }
}

int Stack::pop(){
    int pop_data = -1;
    if(top==NULL){
        cout<<"Stack underflow."<<endl;
    }
    else{
        Node *temp = top;
        pop_data = top->data;
        top = top->next;
        delete temp;
    }
    return pop_data;
}

void Stack::display(){
    Node *temp = top;
    while(temp->next!=NULL){
        cout<<"|"<<temp->data<<"|"<<endl;
        temp = temp->next;
    }
}

int main(){
    Stack s1;
    s1.push(20);
    s1.push(25);
    s1.push(30);
    s1.push(35);
    s1.push(40);
    cout<<s1.pop()<<endl;
    s1.display();
    return 0;
}