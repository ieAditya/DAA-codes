#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node* top;

void push(int x){
    node *t = new node;
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

int pop(){
    node *p = new node;
    int pop_data = -1;
    if(top == NULL){
        cout<<"Stack underflow."<<endl;
    }
    else{
        p = top;
        top = top->next;
        pop_data = p->data;
        free(p);
    }
    return pop_data;
}

void display(){
    node *ptr = new node;
    ptr = top;
    while(ptr->next != NULL){
        cout<<"|"<<ptr->data<<"|"<<endl;
        ptr = ptr->next;
    }
}

int main(){
    push(20);
    push(25);
    push(30);
    push(35);
    push(40);

    cout<<pop()<<endl;

    display();

    return 0;
}