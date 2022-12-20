/*
  5 5 5 5 5 5 5 5 5
  5 4 4 4 4 4 4 4 5
  5 4 3 3 3 3 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 2 1 2 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 3 3 3 3 4 5
  5 4 4 4 4 4 4 4 5
  5 5 5 5 5 5 5 5 5
*/
#include<stdio.h>
void main()
{
    int a,l1,l2,b,k,c;
    scanf("%d",&a);
    b=a;
    k=a;
    for(l1=0; l1<b; l1++)
    {
        a=b;
        for(l2=0; l2<b; l2++)
        {
            printf("%d ",a);
            if(l2<l1)
                    a--;
        }
        c=k;
        if(l1!=b-2)
            k--;
        for (l2=1;l2<b;l2++)
        {
            if(c<1+l2)
                c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    c=2;
    for(l1=1;l1<b;l1++)
    {
        k=b+1;
        for(l2=0;l2<b;l2++)
        {
            if(k!=c)
                k--;
            printf("%d ",k);
        }
        a=c;
        for(l2=1;l2<b;l2++)
        {
            if(a<l2+1)
                a++;
            printf("%d ",a);
        }
        c++;
        printf("\n");
    }
}

