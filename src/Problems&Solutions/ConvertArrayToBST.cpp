/*
Given an integer array nums where the elements are sorted in ascending order, convert it to a
height-balanced binary search tree.
*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *bst(vector<int> &arr, int low, int high)
{
    if (low <= high)
    {
        int mid = (high + low) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        root->left = bst(arr, low, mid - 1);
        root->right = bst(arr, mid + 1, high);
        return root;
    }
    return NULL;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    TreeNode *root = bst(nums, 0, nums.size() - 1);
    return root;
}

int main() {}