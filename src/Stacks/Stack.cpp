#include <iostream>
#define size 10
using namespace std;

class Stack{
    int topIndex = -1;
public:
    int stack[size];
    void push(int item);
    void pop();
    int peek();
    void show();
    bool seek(int item);
    bool isEmpty();
    bool isFull();
};

void Stack::push(int item){
    if(topIndex<size-1){
        topIndex++;
        stack[topIndex] = item;
        cout<<item<<" pushed to stack"<<endl;
    }
    else{
        cout<<"No space to push "<<item<<" in the stack"<<endl;
    }
}

void Stack::pop(){
    if(topIndex>=0){
        topIndex--;
        cout<<"Last item popped from the stack"<<endl;
    }
    else{
        cout<<"Stack empty!"<<endl;
    }
}

int Stack::peek(){
    if(topIndex>=0){
        return stack[topIndex];
    }
    return -1;
}

void Stack::show(){
    cout<<"This is your Stack : ";
    for(int i=topIndex; i>=0; i--){
        cout<<stack[i]<<"\t";
    }
    cout<<endl;
}

bool Stack::seek(int item){
    if(topIndex>=0){
        for(int i=topIndex; i>=0; i--){
            if(stack[i]==item){
                return true;
            }
        }
    }
    return false;
}

bool Stack::isEmpty(){
    if(topIndex==-1){
        return true;
    }

    return false;
}

bool Stack::isFull(){
    if(topIndex==size-1){
        return true;
    }
    return false;
}

int main(){
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);
    myStack.push(70);
    myStack.push(80);
    myStack.push(90);
    myStack.push(100);
    
    if(myStack.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    if(myStack.isFull()){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

    myStack.show();

    myStack.pop();

    if(myStack.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    if(myStack.isFull()){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

    cout<<"Top element "<<myStack.peek()<<" has been peeked"<<endl;

    if(myStack.seek(20)){
        cout<<"Element exists in the stack"<<endl;
    }
    else{
        cout<<"Element doesn't exist in the stack"<<endl;
    }

    myStack.show();

    return 0;
}