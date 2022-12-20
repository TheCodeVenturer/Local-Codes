#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partition(int *arr, int l, int u)
{
    int key=arr[u];
    int i=l-1;
    while (l <= u)
    {
        if(arr[l]<key)
        {
            i++;
            swap(arr[i],arr[l]); 
        }
        l++;
    }
    swap(arr[i+1],arr[u]);
    return (i+1);
}
void quickSort(int *arr, int lower, int upper)
{
    if (lower < upper)
    {
        int key=partition(arr, lower, upper);
        quickSort(arr, lower, key - 1);
        quickSort(arr, key + 1, upper);
    }
}
int main(void)
{
    int arr[]={5,6,9,1,3,10,54,12,76,31};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}