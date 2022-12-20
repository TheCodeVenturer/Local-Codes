#include<stdio.h>
#include<conio.h>
void sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[100],n,i,small;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Sorted array:-\n");
    sort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    getch();
    return 0;
}
