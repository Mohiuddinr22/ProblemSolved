/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
*/
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;

    node(){
        data = 0;
        next = NULL;
    }

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class ListNode{
    public :
    node *first;

    ListNode(){
        first = NULL;
    }
    
};

int main()
{

    return 0;
}