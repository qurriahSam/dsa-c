#include "node.h"

/**
 * PrintListRev - Prints data stored in list
 */

void PrintListRev()
{
  struct Node *temp = head;

  if (temp == NULL)
  {
    return;
  }

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->prev;
  }
  putchar('\n');
}