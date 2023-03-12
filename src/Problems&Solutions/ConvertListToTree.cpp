/*
Given the head of a singly linked list where elements are sorted in ascending order, convert it to a
height-balanced binary search tree.
*/

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *node) : val(x), next(node) {}
};

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *binarySearchTree(vector<int> &arr, int low, int high)
{
    if (low <= high)
    {
        int mid = (high + low) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        root->left = binarySearchTree(arr, low, mid - 1);
        root->right = binarySearchTree(arr, mid + 1, high);
    }
    return root;
}

TreeNode *sortedListToBST(ListNode *head)
{
    vector<int> arr;
    ListNode *curr = head;
    int i = 0;
    while (curr != NULL)
    {
        arr.push_back(curr->val);
        curr = curr->next;
    }
    TreeNode *root = binarySearchTree(arr, 0, arr.size() - 1);
    return root;
}

int main() {}