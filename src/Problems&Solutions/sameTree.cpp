#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *Node = new node;
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

bool isSameTree(node *tree1, node *tree2)
{
    if (tree1 == NULL && tree2 == NULL)
    {
        return true;
    }
    if (tree1 != NULL && tree2 != NULL)
    {
        return (tree1->data == tree2->data && isSameTree(tree1->left, tree2->left) && isSameTree(tree1->right, tree2->right));
    }
    else
        return false;
}

int main()
{
    node *root1 = newNode(1);
    node *root2 = newNode(1);

    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(6);
    root1->right->left = newNode(5);
    root1->right->right = newNode(7);

    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(99);
    root2->right->left = newNode(5);
    root2->right->right = newNode(7);

    if (isSameTree(root1, root2))
    {
        cout << "Trees are same.";
    }
    else
    {
        cout << "Trees are not same.";
    }

    return 0;
}