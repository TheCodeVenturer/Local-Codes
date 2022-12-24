#include<stdio.h>
struct Node{
    int val;
    struct Node *left;
    struct Node *right;
};
typedef struct Node TNode;
TNode *create(TNode *root,int val)
{
    if(root==NULL)
    {
        TNode *temp;
        temp=(TNode*)malloc(sizeof(TNode));
        temp->val=val;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
    }
    else if(root->val>val)
        root->left=create(root->left,val);
    else
        root->right=create(root->right,val);
    return root;
}
void preOrder(TNode *root)
{
    if(root==NULL)
        return;
    printf("%d ",root->val);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(TNode *root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    printf("%d ",root->val);
    inOrder(root->right);
}
void postOrder(TNode *root)
{
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->val);
}
void  search(TNode *root,int val)
{
    if(root == NULL){
        printf("Not Found");
        return;
    }
    if(root->val == val){
        printf("found");
        return;
    }
    else if(root->val>val)
        search(root->left,val);
    else
        search(root->right,val);
}
int height(TNode *root){
    if(root==NULL)
        return 0;
    int leftHeight=0;
    int rightHeight=0;
    leftHeight = height(root->left);
    rightHeight = height(root->right);
    if(leftHeight>rightHeight)
        return leftHeight+1;
    else
        return rightHeight+1;
}
int main(){
    TNode *root=NULL;
    int val,temp;
    printf("Enter -1 to break insertion");
    while(1)
    {
        scanf("%d",&val);
        if(val!=-1)
            root=create(root,val);
        else
            break;
    }
    printf("\nInorder:");
    inOrder(root);
    printf("\nPreOrder:");
    postOrder(root);
    printf("\nPostOrder");
    preOrder(root);
    printf("\nEnter value to search");
    scanf("%d",&temp);
    search(root,temp);
    printf("\nHeight of  tree is %d",height(root));
    return 0;
}

