/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
*/

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
private:
    void sortArray(vector<int> &array)
    {
        int size = array.size();
        int i, j, carry;
        for (i = 1; i < size; i++)
        {
            carry = array[i];
            j = i - 1;
            while (j >= 0 && array[j] > carry)
            {
                swap(array[j], array[j + 1]);
                j--;
            }
            array[j + 1] = carry;
        }
    }

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> v1;
        vector<int> v2;
        ListNode *l1 = list1, *l2 = list2;
        while (l1 != nullptr)
        {
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr)
        {
            v2.push_back(l2->val);
            l2 = l2->next;
        }
        vector<int> v3;
        for (int i = 0; i < v1.size(); i++)
            v3.push_back(v[i]);
        for (int i = 0; i < v2.size(); i++)
            v3.push_back(v[i]);
        sortArray(v3);
        ListNode *ansNode = new ListNode();
        ListNode *head = ansNode;
        for (int i = 0; i < v3.size(); i++)
        {
            head->val = v3[i];
            if (i < v3.size() - 1)
            {
                head->next = new ListNode();
                head = head->next;
            }
        }
        return ansNode;
    }
};

int main() {}