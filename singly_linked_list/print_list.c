#include "node.h"

/**
 * print_list - prints data stored in list
 */

void print_list()
{
  struct Node *temp = head;

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}