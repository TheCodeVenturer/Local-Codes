#include<stdio.h>
#define size 5
int queue[5],front=-1,rear=-1;
void insert()
{
    if(front==(rear+1)%size)
    {
        printf("OverFlow\n");
        return;
    }
    rear=(rear+1)%size;
    printf("Enter value to insert:");
    scanf("%d",&queue[rear]);
    if(front==-1)
        front++;
}
void DQueue()
{
    if(front==-1)
    {
        printf("underflow\n");
        return;
    }
    printf("%d deleted succesfully\n",queue[front]);
    if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%size;
}
void display()
{
    int i=front;
    if(front==-1)
    {
        printf("Underflow\n");
        return;
    }
    while(i!=rear)
    {
        printf("%d  ",queue[i]);
        i=(i+1)%size;
    }
    printf("%d\n",queue[rear]);

}
int main(){
    int ch;
    do{
        printf("\t\t\tM E N U\n===================");
        printf("\n1.Insert in Queue\n2.Delete in Queue\n3.display\n0.Exit");
        printf("enter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:DQueue();break;
            case 3:display();break;
        }
    }while (ch!=0);
    
    return 0;
}