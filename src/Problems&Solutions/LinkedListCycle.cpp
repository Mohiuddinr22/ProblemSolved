/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.
*/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int num) : val(num), next(NULL) {}
};

ListNode *detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    ListNode *fast = head, *slow = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

int main()
{
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    ListNode *node5 = new ListNode(5);
    ListNode *node6 = new ListNode(6);
    ListNode *node7 = new ListNode(7);
    ListNode *node8 = new ListNode(8);
    ListNode *node9 = new ListNode(9);
    ListNode *node10 = new ListNode(10);
    ListNode *node11 = new ListNode(11);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = node11;
    node11->next = node6;
    cout << detectCycle(node1)->val << endl;
}