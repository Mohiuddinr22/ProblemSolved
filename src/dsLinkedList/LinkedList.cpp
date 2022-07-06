#include <iostream>
#include <bits/c++io.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int item)
    {
        data = item;
        next = NULL;
    }
};

void insertAtLast(Node *&head, int item)
{
    Node *node = new Node(item);
    if (head == NULL)
    {
        head = node;
        return;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = node;
}

void display(Node *head)
{
    Node *tail = head;
    while (tail != NULL)
    {
        cout << tail->data << " -> ";
        tail = tail->next;
    }
    cout << "NULL" << endl;
}

void insertAtFirst(Node *&head, int item)
{
    Node *node = new Node(item);
    if (head == NULL)
    {
        head = node;
        return;
    }
    node->next = head;
    head = node;
}

bool exists(Node *&head, int item)
{
    Node *tail = head;
    while (tail != NULL)
    {
        if (tail->data == item)
        {
            return true;
        }
        tail = tail->next;
    }
    return false;
}

int main()
{
    Node *LinkedList = NULL;
    insertAtLast(LinkedList, 10);
    insertAtLast(LinkedList, 20);
    insertAtLast(LinkedList, 30);
    insertAtFirst(LinkedList, 5);
    insertAtFirst(LinkedList, 4);
    insertAtFirst(LinkedList, 3);
    insertAtFirst(LinkedList, 2);
    insertAtFirst(LinkedList, 1);
    insertAtLast(LinkedList, 40);
    display(LinkedList);
    cout << exists(LinkedList, 50) << endl;

    return 0;
}