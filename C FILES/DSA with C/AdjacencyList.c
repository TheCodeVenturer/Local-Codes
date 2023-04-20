#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct pair{
    int first;
    int second;
} pair;
typedef struct node{
    pair data;
    struct node*next;
} node;

typedef struct Graph{
    node * head;
    node *tail;
} Graph;
node *push_back(int vertex,int w){
    pair temp;
    temp.first = vertex;
    temp.second = w;
    node * ptr = (node *)malloc(sizeof(node));
    ptr->data = temp;
    ptr->next = NULL;
    return ptr;
}

int main(){
    int n, m;
    printf("Enter No.of Nodes and Edges\n");
    scanf("%d %d", &n, &m);
    Graph adj[n];
    for(int i=0;i<n;i++)
    {
        adj[i].head=NULL;
        adj[i].tail=NULL;
    }
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        node*first = push_back(v,w);
        if(adj[u].head==NULL)
        {
            adj[u].head=first;
            adj[u].tail=first;
        }
        else{
            adj[u].tail->next=first;
            adj[u].tail=first;
        }
        first = push_back(u,w);
        if(adj[v].head==NULL)
        {
            adj[v].head=first;
            adj[v].tail=first;
        }
        else{
            adj[v].tail->next=first;
            adj[v].tail=first;
        }
    }
    //printing graph
    for(int i=0;i<n;i++){
        node*head = adj[i].head;
        node*tail = adj[i].tail;
        printf("%d  ->",i);
        while(head!=tail->next){
            printf(" [%d,%d] ->",head->data.first,head->data.second);
            head=head->next;
        }
        printf("\n");
    }
}