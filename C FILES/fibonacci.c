#include<stdio.h>
#include<conio.h>
int fibo(int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
        return (fibo(x-1)+fibo(x-2));
}
int main(){
    int i,limit;
    printf("Enter limit of series:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        printf("%d\t",fibo(i));
    }
    getch();
    return 0;
}