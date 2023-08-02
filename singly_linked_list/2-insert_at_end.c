#include <stdio.h>
#include <stdlib.h>

/*
* singly linked list that inserts number at the end of list
**/

typedef struct Node {
  int data;
  struct Node *next;
} node;


void insert_end(int num, node **ptr_head);
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
    insert_end(num, &head);
    i++;
  }

  printf("Numbers entered are: ");
  _print(head);

  return 0;
}

void insert_end(int num, node **ptr_head)
{
  node *temp_head = *ptr_head;
  node *temp = (node*)malloc(sizeof(node));

  temp->data = num;
  temp->next = NULL;

  if (*ptr_head == NULL)
  {
    *ptr_head = temp;
    return;
  }

  while (temp_head->next != NULL)
  {
    temp_head = temp_head->next;
  }

  temp_head->next = temp;
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