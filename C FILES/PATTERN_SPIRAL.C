#include<stdio.h>
int main()
{
    printf("enter number");
    int n,i,j,k,l,count=0,a=0;
    scanf("%d",&n);
    int arr[n][n];
    while(count<n*n)
    {
        for(i=0+a;i<n-a;i++)
        {
            arr[a][i]=++count;
        }
        for(j=1+a;j<n-a;j++)
            arr[j][i-1]=++count;
        for(k=j-2;k>0+a;k--)
            arr[i-1][k]=++count;
        for(l=i-1;l>0+a;l--)
            arr[l][k]=++count;
        a++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    return 0;
}