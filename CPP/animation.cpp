#include<iostream>
int main()
{
    int i,j;
    while(true){
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getchar();
    system("cls");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getchar();
    system("cls");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i+j==4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getchar();
    system("cls");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getchar();
    system("cls");
    
    }
}
