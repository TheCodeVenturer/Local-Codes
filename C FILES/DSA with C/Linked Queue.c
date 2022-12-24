#include <stdio.h>
struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node N;
void Insert(int n, N **front, N **rear)
{
    N *ptr;
    ptr = (N *)malloc(sizeof(N));
    ptr->val = n;
    ptr->next = NULL;
    if (*front == NULL)
    {
        *front = ptr;
        *rear = ptr;
    }
    else
    {
        (*rear)->next = ptr;
        *rear = ptr;
    }
}
void Delete(N **front, N **rear)
{
    if (*front == NULL)
    {
        printf("underflow\n");
        return;
    }
    else
    {
        N *temp = *front;
        printf("%d Deleted", temp->val);
        *front = (*front)->next;
        if (temp == rear)
            *rear = NULL;
        free(temp);
    }
    printf("\n");

}
void Display(N *front)
{
    if (front == NULL)
    {
        printf("Underflow");
        return;
    }
    N *tmp = front;
    while (tmp)
    {
        printf("%d   ", tmp->val);
        tmp = tmp->next;
    }
    printf("\n");
}
void main()
{
    N *front = NULL, *rear = NULL;
    int item;
    Insert(5, &front, &rear);
    Insert(6, &front, &rear);
    Insert(7, &front, &rear);
    Insert(7,&front,&rear);
    Insert(8,&front,&rear);
    Insert(9,&front,&rear);
    Insert(10,&front,&rear);
    Display(front);
    Delete(&front,&rear);
    Display(front);
}