#include <iostream>
#define size 10
using namespace std;

class Queue{
    int front = -1;
    int rear = -1;
    
    public :
    int queue[size];
    bool isEmpty();
    bool isFull();
    void enQueue(int item);
    void deQueue();
    int frontElement();
    void show();
};

bool Queue::isEmpty(){
    return (front==-1 && rear==-1);
}

bool Queue::isFull(){
    return rear==size-1;
}

void Queue::enQueue(int item){
    if(rear==size-1){
        cout<<"Queue is full, can't enqueue "<<item<<endl;
    }
    else if(front==-1 && rear==-1){
        front = rear = 0;
        queue[rear] = item;
        cout<<item<<" enqueued"<<endl; 
    }
    else{
        rear++;
        queue[rear] = item;
        cout<<item<<" enqueued"<<endl; 
    }
}

void Queue::deQueue(){
    if(front==-1 && rear==-1){
        cout<<"Queue empty, can't dequeue"<<endl;
    }
    else if(front == rear){
        front = rear = -1;
        cout<<"Successfully dequeued"<<endl;
    }
    else{
        front++;
        cout<<"Successfully dequeued"<<endl;
    }
}

int Queue::frontElement(){
    return queue[front];
}

void Queue::show(){
    if(front==-1 && rear==-1){
        cout<<"Nothing to show"<<endl;
    }
    else{
        cout<<"Here's the queue : ";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    Queue queue;
    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);
    queue.enQueue(40);
    queue.show();
    
    if(queue.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}