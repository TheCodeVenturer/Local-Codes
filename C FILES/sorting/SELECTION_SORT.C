#include<stdio.h>

int main()
{
    int arr[8]={23,12,67,34,8,29,98,3};
    int i,j,m,temp;
    printf("Original Array is:\n");
    for(i=0;i<8;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<8;i++)            //Selection Sort
    {
        m=i;
        for(j=i+1;j<8;j++)
        {
            if(arr[j]<arr[m])       //Finding Smallest number
                m=j;
        }
        temp=arr[i];
        arr[i]=arr[m];
        arr[m]=temp;
    }
    printf("\nArray in Ascending Order is:\n");
    for(i=0;i<8;i++)
        printf("%d ",arr[i]);
    return 0;
}