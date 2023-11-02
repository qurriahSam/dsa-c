#include "node.h"

/**
 * Reverse_list - reverses a linked list
 *
 */

void Reverse_list()
{
  struct Node *temp_head, *prev, *next;

  temp_head = head;
  prev = NULL;

  while (temp_head != NULL)
  {
    next = temp_head->next;
    temp_head->next = prev;
    prev = temp_head;
    temp_head = next;
  }

  head = prev;
}
