#include<stdio.h>
void main()
{
    int a[10],b[10],i,f,j,k=0;
    for(i=0;i<10;i++)
    {
        printf("Enter no.:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        f=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                f=1;
                break;}
        }
        if(f==0)
        {
            b[k]=a[i];
            k++;}
    }printf("primes are");
    for(i=0;i<k;i++)
        printf("  %d  ",b[i]);
}
