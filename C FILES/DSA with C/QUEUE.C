#include <stdio.h>
#define ms 5
int front = -1, rear = -1, Queue[5];
void insert()
{
    if (rear == ms - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    else if (rear == -1)
    {
        front++;
        rear++;
    }
    else
        rear++;
    printf("Enter no. to insert:");
    scanf("%d", &Queue[rear]);
}
void Delete()
{
    if (front == -1)
    {
        printf("Queue UnderFlow\n");
        return;
    }
    else if (front == rear)
    {
        printf("%d deleted\n", Queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%d deleted\n", Queue[front]);
        front++;
    }
}
void display()
{
    int i = front;
    if (i == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Queue Elements are:-\n");
    while (i <= rear)
    {
        printf("%d ", Queue[i]);
        i++;
    }
}
int main()
{
    int ch;
    do
    {
        printf("-:M E N U:-\n===================");
        printf("\n1.Insert Elements\n2.Delete Elements\n3.Display\n4.Exit");
        printf("\nEnter Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
        }
    } while (ch != 4);
}
