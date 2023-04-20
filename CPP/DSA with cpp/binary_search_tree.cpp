#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void insert(Node *root, int data)
{
    while (root)
    {
        if (data < root->data)
        {
            if (root->left == NULL)
            {
                root->left = new Node(data);
                return;
            }
            else
                root = root->left;
        }
        else
        {
            if (root->right == NULL)
            {
                root->right = new Node(data);
                return;
            }
            else
                root = root->right;
        }
    }
}
Node *helpDelete(Node *&root)
{
    Node *node;
    Node *leftSbt = root->left;
    if (root->right)
    {
        node = root->right;
        root = root->right;
        while (root->left)
            root = root->left;
        root->left = leftSbt;
    }
    else
        node = root->left;
    return node;
}
Node *deleteNode(Node *root, int key)
{
    if (!root)
        return NULL;
    Node *prev = nullptr;
    Node *node = root;
    if (root->data == key)
        return helpDelete(root);
    while (root && root->data != key)
    {
        prev = root;
        if (root->data > key)
            root = root->left;
        else
            root = root->right;
    }
    if (!root)
        return node;
    if (prev->left == root)
        prev->left = helpDelete(root);
    else
        prev->right = helpDelete(root);
    return node;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = NULL;
    while (true)
    {
        int term;
        cin >> term;
        if (term == -1)
            break;
        if (root == NULL)
        {
            root = new Node(term);
        }
        else
            insert(root, term);
    }
    preOrder(root);
    int val;
    cout<<"Enter Key to delete";
    cin>>val;
    deleteNode(root,val);
    cout<<endl;
    preOrder(root);
}