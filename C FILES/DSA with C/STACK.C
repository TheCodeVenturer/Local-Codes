#include <stdio.h>
#define ms 5
int stack[5], top = -1;
void Push()
{
  if (top == ms - 1)
    printf("Stack overflow");
  else
  {
    top++;
    printf("Enter no. to push:");
    scanf("%d", &stack[top]);
  }
}
void Pop()
{
  if (top == -1)
    printf("Stack underflow");
  else
  {
    printf("%d poped out", stack[top]);
    top--;
  }
}
void Display()
{
  int i;
  if (top == -1)
    printf("Stack underflow");
  else
    for (i = top; i > -1; i--)
    {
      printf("| %d |\n", stack[i]);
      printf("+---+\n");
    }
}
void main()
{
  int ch;
  while (1)
  {
    printf("\n-:M E N U:-\n==============");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    printf("\nEnter Choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      Push();
      break;
    case 2:
      Pop();
      break;
    case 3:
      Display();
      break;
    case 4:
      return;
    }
  }
}
