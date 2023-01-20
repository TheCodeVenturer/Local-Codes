#include <iostream>
using namespace std;
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
    int arr[100],i=0,size;
	cout<<"Enter Size:";
	cin>>size;
	for (int i = 0; i < size; i++)
        cin>> arr[i] ;
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
