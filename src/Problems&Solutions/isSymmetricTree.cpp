// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

//             1  [Symmetric]                      1   [Not Symmetric]
//           /   \                               /   \
//          2     2                             2     2
//         / \   / \                             \     \
//        3   4 4   3                             3     3
//

#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool checkSymmetry(TreeNode *left, TreeNode *right)
{
    if (left == NULL && right == NULL)
        return true;
    if (left != NULL && right == NULL)
        return false;
    if (left == NULL && right != NULL)
        return false;
    if (left->val != right->val)
        return false;
    if (left != NULL && right != NULL)
        return checkSymmetry(left->left, right->right) && checkSymmetry(left->right, right->left);
    else
        return false;
}

bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
        return false;
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left != NULL && root->right != NULL)
    {
        return checkSymmetry(root->left, root->right);
    }
    else
        return false;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    if (isSymmetric(root))
        cout << "The tree is symmetric" << endl;
    else
        cout << "The tree is not symmetric" << endl;
}