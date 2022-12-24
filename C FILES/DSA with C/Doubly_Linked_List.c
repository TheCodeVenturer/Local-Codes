#include <stdio.h>
#include <malloc.h>

struct Node
{
  int val;
  struct Node *next, *prev;
};
typedef struct Node N;
N *start = NULL, *tmp, *end, *ptr = NULL;
void display();
void insertNode()
{
  ptr = (N *)malloc(sizeof(N));
  printf("Enter Value to insert");
  scanf("%d", &ptr->val);
  if (start == NULL)
  {
    start = ptr;
    end = ptr;
    ptr->prev = NULL;
    ptr->next = NULL;
  }
  else
  {
    end->next = ptr;
    ptr->next = NULL;
    ptr->prev = end;
    end = ptr;
  }
}
void displayDList()
{
  tmp = start;
  while (tmp->next != NULL)
  {
    printf("%d->", tmp->val);
    tmp = tmp->next;
  }
  tmp = end;
  while (tmp != NULL)
  {
    printf("%d<-", tmp->val);
    tmp = tmp->prev;
  }
}
void deleteNode()
{
  int x;
  if (start == NULL)
  {
    printf("no nodes\n");
    return;
  }
  tmp = start;
  printf("Enter a no. to Delete:");
  scanf("%d", &x);
  while (tmp)
  {
    if (tmp->val == x)
    {
      if (tmp == start)
      {
        start = tmp->next;
        if (tmp->next)
          tmp->next->prev = NULL;
        if (tmp == end)
          end = start;
      }
      else
      {
        if (tmp == end)
          end = tmp->prev;
        else
          tmp->next->prev = tmp->prev;
        tmp->prev->next = tmp->next;
      }
      free(tmp);
      printf("%d deleted", x);
      return;
    }
    tmp = tmp->next;
  }
  printf("%d not found", x);
}
int main()
{
  int ch;
  do
  {
    printf("\n-:M E N U:-\n==============");
    printf("\n0.Exit\n1.Insert Node\n2.Display List\n3.Delete Node");
    printf("\nEnter choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insertNode();
      break;
    case 2:
      displayDList();
      break;
    case 3:
      deleteNode();
      break;
    }
  } while (ch != 0);
}
