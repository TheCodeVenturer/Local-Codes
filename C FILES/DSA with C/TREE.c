#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct TNode
{
 int info;
 struct TNode *LC;
 struct TNode *RC;
};
typedef struct TNode T;
T *CreateTree(int,T *);
void DisplayTree(T *,int);

T *CreateTree(int info,T *node)
{
 if(node==NULL)
 {
  node=(T *)malloc(sizeof(T));
  node->info=info;
  node->LC=NULL;
  node->RC=NULL;
  return(node);
 }
 if(node->info>=info)
  node->LC=CreateTree(info,node->LC);
 else
  node->RC=CreateTree(info,node->RC);
 return(node);
}
void DisplayTree(T *Tree,int L)
{
 int i;
 if(Tree)
 {
  DisplayTree(Tree->RC,L+1);
  printf("\n");
  for(i=0;i<L;i++)
   printf("  ");
  printf("%d",Tree->info);
  printf("\n");
  DisplayTree(Tree->LC,L+1);
 }
}
void Preorder(T *Tree)
{
 if(Tree)
 {
  printf("%d  ",Tree->info);
  Preorder(Tree->LC);
  Preorder(Tree->RC);

 }
}
void PostOrder(T *Tree)
{
 if(Tree)
 {
  PostOrder(Tree->LC);
  PostOrder(Tree->RC);
  printf("%d  ",Tree->info);

 }
}
void InOrder(T *Tree)
{
 if(Tree)
 {
  InOrder(Tree->LC);
  printf("%d  ",Tree->info);
  InOrder(Tree->RC);
 }
}
void Search(T *Tree,int n)
{
 if(Tree)
 {
  if(Tree->info==n)
  {
    printf("Found");
    return;
  }
 }
 else if(Tree==NULL)
 {
  printf("Not Found");
  return;
 }
 if(Tree->info>n)
  Search(Tree->LC,n);
 else
  Search(Tree->RC,n);
}
int Height(T *Tree)
{
 int l,r;
 if(Tree==NULL)
  return 0;
 l=Height(Tree->LC);
 r=Height(Tree->RC);
 if(l>r)
  return(l+1);
 else
  return(r+1);
}


void main()
{
 int info,term,h;
 char ch;
 T *Tree=NULL;
 clrscr();
 do
 {
  printf("Input Information:");
  scanf("%d",&info);fflush(stdin);
  Tree=CreateTree(info,Tree);
  printf("\nTree Is Now:-\n");
  DisplayTree(Tree,1);
  printf("Continue:");
  scanf("%c",&ch);fflush(stdin);
 }while(ch!='n');
 printf("\nPost-order Traversal:\n");
 PostOrder(Tree);
 printf("Enter ELement to search");
 scanf("%d",&term);
 Search(Tree,term);
 printf("Height of the tree is:");
 h=Height(Tree);
 printf("%d",h);
 getch();
}