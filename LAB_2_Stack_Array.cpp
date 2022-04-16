#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void push(stack *st){
    if(st->top == st->size-1){
        cout<<"Stack overflow."<<endl;
    }
    else{
        int data;
        cout<<"Enter data to push : ";
        cin>>data;
        st->top++;
        st->s[st->top] = data;
        cout<<"Pushed "<<data<<" successfully."<<endl;
    }
}

int pop(stack *st){
    int pop_data = -1;
    if(st->top == -1){
        cout<<"Stack underflow."<<endl;
    }
    else{
        pop_data = st->s[st->top];
        st->top--;
    }
    return pop_data;
}

void display(stack *st){
    cout<<" - "<<endl;
    for(int i = st->top; i>=0; i--){
        cout<<"|"<<st->s[i]<<"|"<<endl;
    }
    cout<<" - "<<endl;
}

int main(){
    struct stack s1;
    cout<<"Enter size of stack: ";
    cin>>s1.size;
    s1.s = new int[s1.size];
    s1.top = -1;
    push(&s1);
    push(&s1);
    push(&s1);
    push(&s1);
    display(&s1);
    cout<<"Popped: "<<pop(&s1)<<endl;
    cout<<"Popped: "<<pop(&s1)<<endl;
    display(&s1);
    return 0;
}