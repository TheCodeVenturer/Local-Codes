#include<stdio.h>
#include<conio.h>
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return(x*fact(x-1));
}
int main(){
    int num1;
    printf("enter a no.");
    scanf("%d",&num1);
    printf("Factorial of %d is %d",num1,fact(num1));
    return 0;
}