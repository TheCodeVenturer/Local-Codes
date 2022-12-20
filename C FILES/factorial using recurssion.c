#include<stdio.h>
int fact(int);
int mul(int,int,int);
void main()
{
    int i;
    printf("Enter no. to find factorial");
    scanf("%d",&i);
    if(i<0)
        printf("Mathematical Error");
    else
    {
        printf("factorial of %d is %d",i,fact(i));
    }
}
int fact(int x)
{
    int i=1;
    if(x>1)
        i=mul(x,2,x);
    return i;
}
int  mul(int a,int b,int c)
{
    if(b<c)
    {
        a*=b;
        mul(a,++b,c);
    }
    else
        return a;
}
