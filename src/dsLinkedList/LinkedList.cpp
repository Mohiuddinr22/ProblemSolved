#include <iostream>
#include <bits/c++io.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int item)
    {
        this->data = item;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *first;
    int size = 0;

public:
    LinkedList()
    {
        first = NULL;
    }
    void insertAtLast(int item);    // Done
    void insertAtFirst(int item);   // Done
    int sizeOfList();               // Done
    void display();                 // Done
    void displayArray(int *array);  // Done
    bool exists(int item);          // Done
    int valueAtIndex(int index);    // Done
    int getPreviousValue(int item); // Done
    int *toArray();                 // Done
    Node getPrevious(Node *node);
    void removeFromLast();
    void removeFromFirst();
};

void LinkedList::insertAtLast(int item)
{
    Node *last = first;
    Node *node = new Node(item);
    if (first == NULL)
    {
        first = last = node;
        size++;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = node;
    size++;
}

void LinkedList::insertAtFirst(int item)
{
    Node *last = first;
    Node *node = new Node(item);
    if (first == NULL)
    {
        first = last = node;
        size++;
        return;
    }
    node->next = first;
    first = node;
    size++;
}

int LinkedList::sizeOfList()
{
    return size;
}

void LinkedList::display()
{
    Node *last = first;
    while (last != NULL)
    {
        cout << last->data << " -> ";
        last = last->next;
    }
    cout << "NULL" << endl;
}

void LinkedList::displayArray(int *array)
{
    cout << "[";
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[size - 1] << "]" << endl;
}

bool LinkedList::exists(int item)
{
    Node *last = first;
    if (first == NULL)
    {
        cout << "List is empty" << endl;
        return false;
    }
    while (last != NULL)
    {
        if (last->data == item)
        {
            return true;
        }
        last = last->next;
    }
    return false;
}

int LinkedList::valueAtIndex(int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return -1;
    }
    Node *last = first;
    for (int i = 0; i < index; i++)
    {
        last = last->next;
    }
    return last->data;
}

int LinkedList::getPreviousValue(int item)
{
    Node *last = first;
    while (last->next->data != item)
    {
        last = last->next;
    }
    return last->data;
}

Node LinkedList::getPrevious(Node *node)
{
    Node 
}

int *LinkedList::toArray()
{
    int *ptr = new int[size];
    Node *last = first;
    int i = 0;
    while (last != NULL)
    {
        ptr[i] = last->data;
        i++;
        last = last->next;
    }
    return ptr;
}

int main()
{
    LinkedList newLinkedList;
    // newLinkedList.insertAtLast(10);
    newLinkedList.insertAtLast(20);
    newLinkedList.insertAtLast(30);
    newLinkedList.insertAtLast(40);
    newLinkedList.insertAtLast(50);
    newLinkedList.insertAtLast(60);
    newLinkedList.insertAtLast(70);
    newLinkedList.insertAtFirst(10);
    // newLinkedList.insertAtFirst(10);
    newLinkedList.display();
    int *array = newLinkedList.toArray();
    newLinkedList.displayArray(array);

    return 0;
}
