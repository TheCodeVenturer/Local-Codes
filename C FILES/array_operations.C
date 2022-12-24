#include <stdio.h>
void insert(int n, int pos, int *size, int arr[])
{
  int i, temp;
  for (i = *size; i > pos - 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos - 1] = n;
  *size = *size + 1;
}
void Delete(int pos, int *size, int arr[])
{
  int i;
  for (i = pos - 1; i < *size - 1; i++)
    arr[i] = arr[i + 1];
  *size = *size - 1;
}
void display(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
void sort(int arr[], int size)
{
  int i, j;
  for (i = 0; i < size - 1; i++)
    for (j = 0; j < size - i - 1; j++)
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
}
int linsrch(int arr[], int size, int num)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (arr[i] == num)
      return i + 1;
  }
  return -1;
}
int binsrch(int arr[], int size, int num)
{
  int lb, ub, mid;
  lb = 0;
  ub = size - 1;
  while (lb <= ub)
  {
    mid = (lb + ub) / 2;
    if (arr[mid] == num)
      return mid + 1;
    else if (num > arr[mid])
      lb = mid + 1;
    else
      ub = mid - 1;
  }
  return -1;
}
int main()
{
  int arr[20], n, i, num, pos;
  printf("enter size of array:");
  scanf("%d", &n);
  for (i = 0; i < 20; i++)
  {
    arr[i] = -1;
  }
  printf("enter elements of array:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter element to search:");
  fflush(stdin);
  sort(arr, n);
  display(arr, n);
  scanf("%d", &num);
  pos = binsrch(arr, n, num);

  if (pos == -1)
    printf("%d not found", num);
  else
    printf("%d found at %d", num, pos);
}
