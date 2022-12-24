#include <stdio.h>
#include <math.h>
int prime(int n)
{
  int i, flag = 1;
  float root = sqrt(n);
  for (i = 2; i <= root; i++)
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  return flag;
}

int main()
{
  int arr[10], i, count = 0;
  i = 0;
  printf("enter elements of array:");
  do
  {
    scanf("%d", &arr[i]);
    if (prime(arr[i]))
    {
      printf("%d is prime\n", arr[i]);
      count++;
    }
    i++;
  } while (i < 10);
  printf("total primes are %d", count);
}
