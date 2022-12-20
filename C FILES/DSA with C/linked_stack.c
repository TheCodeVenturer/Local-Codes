#include <stdio.h>
#include <malloc.h>
struct Node
{
    int val;
    struct Node *prev;
};
typedef struct Node N;
N *top = NULL, *ptr = NULL;
void push()
{
    ptr=(N*)malloc(sizeof(N));
    printf("Enter value to push:");
    scanf("%d", &ptr->val);
    ptr->prev=top;
    top=ptr;
}
void pop()
{
    if (top == NULL)
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        N*ptr;
        ptr=top;
        top=top->prev;
        printf("%d popped out", ptr->val);
        free(ptr);
    }
}
void peek()
{
    printf("\nTop of Stack is %d", top->val);
}
void status()
{
    N* i = top;
    if (i == NULL)
    {
        printf("Stack is Empty");
        return;
    }
    else
    {
        while (i)
        {
            printf("%d\n", i->val);
            i=i->prev;
        }
    }
}
void main()
{
    int ch;
    printf("\n=========-: M E N U :-==========");
    printf("\n1....Push");
    printf("\n2....Pop");
    printf("\n3....peek");
    printf("\n4....Status");
    printf("\n0....Exit");
    do
    {
        printf("\nEnter Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:status();break;
        }
    } while (ch != 0);
}