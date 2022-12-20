#include <bits/stdc++.h>
using namespace std;

class tree
{
private:
    int data;
    tree *lc;
    tree *rc;

public:
    tree *createTree(tree *node, int &info)
    {
        if (node == NULL)
        {
            node = (tree *)malloc(sizeof(tree));
            cout << "Enter value to insert:";
            cin >> node->data;
            node->lc = NULL;
            node->rc = NULL;
            return node;
        }
        if (node->data > info)
            node->lc = createTree(node->lc, info);
        else
            node->rc = createTree(node->rc, info);
    }
};