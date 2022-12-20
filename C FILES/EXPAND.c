#include<stdio.h>
void main()
{
    int a,n,r,rev=0,c=0,t;
    printf("Enter a no.");
    scanf("%d",&n);
    for (a=n;a>0;a=a/10)
    {
        r=a%10;
        rev=rev*10 + r;
        c+=1;
    }
    for(a=rev;a>0;a=a/10)
    {
        c-=1;
        r=a%10;
        for(t=c;t>0;t--)
            r*=10;
        if(r!=0)
        {
            if(a<10)
                printf("%d",r);
            else
                printf("%d + ",r);
        }
    }
}
