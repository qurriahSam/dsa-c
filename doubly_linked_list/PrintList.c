#include "node.h"

/**
 * PrintList - Prints data stored in list
 */

void PrintList()
{
  struct Node *temp = head;

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  putchar('\n');
}