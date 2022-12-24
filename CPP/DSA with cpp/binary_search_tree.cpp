#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

void insert(Node *root,int data){
    while(root)
    {
        if(data<root->data)
        {
            if(root->left==NULL)
            {
                root->left=new Node(data);
                return;
            }
            else
                root=root->left;
        }
        else
        {
            if(root->right==NULL)
            {
                root->right=new Node(data);
                return;
            }
            else
                root=root->right;
        }
    }
}


void preOrder(Node *root)
{   
    if(root==NULL)
        return;
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node *root=NULL;
    while(true){
        int term;
        cin>>term;
        if(term==-1)
            break;
        if(root==NULL)
        {
            root=new Node(term);
        }
        else
            insert(root,term);
    }
    preOrder(root);
}