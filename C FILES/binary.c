#include<stdio.h>
#include<conio.h>
int bin(int x)
{
    int i=1;
    long long int s=0;
    while(x>0)
    {
        s+=(x%2)*i;
        x/=2;
        i*=10;
    }
    return s;
}
int main(){
    int num1;
    scanf("%d",&num1);
    printf("%d",bin(num1));
    getch();
    return 0;
}