#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node N;
N *start = NULL, *end = NULL, *ptr, *tmp1, *tmp2;
void CreateNode()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter Value:");
    scanf("%d", &ptr->val);
    ptr->next = NULL;
    if (start == NULL)
    {
        start = ptr;
        end = ptr;
    }
    else
    {
        end->next = ptr;
        end = ptr;
    }
}
void FirstNode()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter value:");
    scanf("%d", &ptr->val);
    ptr->next = start;
    start = ptr;
}
void LastNode()
{
    ptr = (N *)malloc(sizeof(N));
    printf("Enter value:");
    scanf("%d", &ptr->val);
    end->next = ptr;
    ptr->next = NULL;
    end = ptr;
}
void InsertNodeAfter()
{
    int x, flag = 1;
    printf("Enter value after which you want to insert node:");
    scanf("%d", &x);
    tmp1 = start;
    while (tmp1 != NULL)
    {
        if (tmp1->val == x)
        {
            ptr = (N *)malloc(sizeof(N));
            printf("Enter value:");
            scanf("%d", &ptr->val);
            ptr->next = tmp1->next;
            if (tmp1->next == NULL)
                end = ptr;
            tmp1->next = ptr;
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
    }
    if (flag)
        printf("%d Not found in the list", x);
}
void InsertNodeBefore()
{
    int x, flag = 1;
    printf("Enter value before which you want to insert node:");
    scanf("%d", &x);
    tmp1 = tmp2 = start;
    while (tmp1 != NULL)
    {
        if (tmp1->val == x)
        {
            ptr = (N *)malloc(sizeof(N));
            printf("Enter value:");
            scanf("%d", &ptr->val);
            ptr->next = tmp1;
            if (tmp1 == start)
                start = ptr;
            else
                tmp2->next = ptr;
            flag = 0;
            break;
        }
        tmp2 = tmp1;
        tmp1 = tmp1->next;
    }
    if (flag)
        printf("%d Not found in the list", x);
}
void CountNode()
{
    int count = 0;
    tmp1 = start;
    while (tmp1 != NULL)
    {
        count++;
        tmp1 = tmp1->next;
    }
    printf("There are total %d nodes", count);
}
void InsertAtPosition()
{
    int position, count = 0, flag = 1;
    printf("Enter Position:");
    scanf("%d", &position);
    position--;
    tmp1 = start;
    while (tmp1 != NULL)
    {
        if (position == 0)
        {
            ptr = (N *)malloc(sizeof(N));
            printf("Enter value:");
            scanf("%d", &ptr->val);
            ptr->next = start;
            start = ptr;
            flag = 0;
            break;
        }
        else if (count == position)
        {
            ptr = (N *)malloc(sizeof(N));
            printf("Enter value:");
            scanf("%d", &ptr->val);
            ptr->next = tmp2->next;
            tmp2->next = ptr;
            flag = 0;
            break;
        }
        tmp2 = tmp1;
        tmp1 = tmp1->next;
        count++;
    }
    if (flag)
        printf("Position Not Found");
}

void deleteFirstNode()
{
    tmp1 = start;
    start = tmp1->next;
    free(tmp1);
    printf("Deleted Node succesfully");
}

void deleteLastNode()
{
    ptr = start;
    while (ptr)
    {
        if (ptr->next == NULL)
        {
            if (ptr == start)
            {
                free(ptr);
                start = NULL;
                printf("Deleted Node succesfully");
                return;
            }
            else
            {
                tmp1->next = NULL;
                end = tmp1;
                free(ptr);
                printf("Deleted Node succesfully");
                return;
            }
        }
        tmp1 = ptr;
        ptr = ptr->next;
    }
    printf("No Node Found");
}

void deleteAtPosition()
{
    int position, count = 0, flag = 1;
    printf("Enter Position:");
    scanf("%d", &position);
    position--;
    tmp1 = start;
    while (tmp1 != NULL)
    {
        if (position == 0)
        {
            ptr = start;
            start = ptr->next;
            free(ptr);
            flag = 0;
            printf("Deleted Node succesfully");
            break;
        }
        else if (count == position)
        {
            ptr = tmp2->next;
            tmp2->next = tmp1->next;
            if (ptr->next == NULL)
                end = tmp2;
            free(ptr);
            flag = 0;
            printf("Deleted Node succesfully");
            break;
        }
        tmp2 = tmp1;
        tmp1 = tmp1->next;
        count++;
    }
    if (flag)
        printf("Position Not Found");
}

void reverseList()
{
    ptr = start;
    end = start;
    tmp2 = NULL;
    tmp1 = ptr->next;
    while (tmp1)
    {
        ptr->next = tmp2;
        tmp2 = ptr;
        ptr = tmp1;
        tmp1 = tmp1->next;
    }
    ptr->next = tmp2;
    start = ptr;
}
void PrintNode()
{   
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
} 
void main()
{
    int ch;
    do
    {
        printf("\n=======================-:MENU:-=========================");
        printf("\n1.......Create Node");
        printf("\n2.......Print Node");
        printf("\n3.......Count the Nodes");
        printf("\n4.......Insert Node at first");
        printf("\n5.......Insert Node at last");
        printf("\n6.......Insert Node after a Node");
        printf("\n7.......Insert Node before a Node");
        printf("\n8.......Insert Node at position");
        printf("\n9.......Delete First Node");
        printf("\n10.......Delete Last Node");
        printf("\n11.......Delete Node at position");
        printf("\n12.......Reverse Node");
        printf("\n0.......Exit");
        printf("\nEnter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            CreateNode();
            break;
        case 2:
            PrintNode();
            break;
        case 3:
            CountNode();
            break;
        case 4:
            FirstNode();
            break;
        case 5:
            LastNode();
            break;
        case 6:
            InsertNodeAfter();
            break;
        case 7:
            InsertNodeBefore();
            break;
        case 8:
            InsertAtPosition();
            break;
        case 9:
            deleteFirstNode();
            break;
        case 10:
            deleteLastNode();
            break;
        case 11:
            deleteAtPosition();
            break;
        case 12:
            reverseList();
            break;
        }
    } while (ch != 0);
}