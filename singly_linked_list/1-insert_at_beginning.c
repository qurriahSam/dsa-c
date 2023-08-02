#include <stdio.h>
#include <stdlib.h>

/*
* singly linked list that inserts number at the beginning of list
**/

typedef struct Node {
  int data;
  struct Node *next;
} node;


void insert(int num, node **ptr_head);
void _print(node *t_head);

int main()
{
  node *head;
  int amount, num, i;
  head = NULL;

  printf("How many numbers? ");
  scanf("%d", &amount);

  i = 0;
  while(i < amount)
  {
    printf("Enter number: ");
    scanf("%d", &num);
    insert(num, &head);
    i++;
  }

  printf("Numbers entered are: ");
  _print(head);

  return 0;
}

void insert(int num, node **ptr_head)
{
  node *temp = (node*)malloc(sizeof(node));
  temp->data = num;
  temp->next = *ptr_head;
  *ptr_head = temp;
}

void _print(node *t_head)
{

  while(t_head != NULL)
  {
    printf("%d ", t_head->data);
    t_head = t_head->next;
  }
  putchar('\n');
}