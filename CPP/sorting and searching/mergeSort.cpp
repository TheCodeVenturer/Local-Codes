#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int u){
    int coy[u-l],pos=0,betn=mid+1,lowPos=l;
    while(lowPos<=mid && betn<=u)
    {
        if(arr[lowPos]>arr[betn])
            coy[pos++]=arr[betn++];
        else
            coy[pos++]=arr[lowPos++];
    }
    while(lowPos<=mid)
        coy[pos++]=arr[lowPos++];
    while(betn<=u)
        coy[pos++]=arr[betn++];
    int k=0;
    for(int i=l;i<=u;i++)
        arr[i]=coy[k++];
}
void mergeSort(int arr[],int l,int u)
{
    if(l<u){
        int mid = (u+l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}
int main(){
    int arr[]={5,6,9,1,3,10,54,12,76,31},i;
    mergeSort(arr,0,9);
    for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
}