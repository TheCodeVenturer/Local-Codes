#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void heapSort(int *arr,int len)
{
    len++;
    int i=1;
    while(len>1)
    {
        i=1;
        cout<<arr[1]<<" ";
        arr[i]=arr[len-1];
        len--;
        while(2*i<len || (2*i)+1 <len)
        {
            int term=arr[2*i]>arr[(2*i)+1]?(2*i)+1:2*i;
            if(arr[i]>arr[term])
            {
                swap(arr[i],arr[term]);
                i=term;
            }
            else
                break;
        }
    }
}
void heapify(int *arr,int pos)
{
    while(pos>1)
    {
        if(arr[pos]>arr[pos/2])
            return;
        swap(arr[pos],arr[pos/2]);
        pos/=2;
    }
}
void makeHeap(int *arr1,int len)
{
    int i,copy[len+1];
    copy[0]=0;
    for(i=1;i<len+1;i++)
    {
        copy[i]=arr1[i-1];
        heapify(copy,i);
    }
    heapSort(copy,len);
}
int main(){
    int arr1[]={9,4,6,1,0,2,8,3,7};
    makeHeap(arr1,9);
}