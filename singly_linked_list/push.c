#include "node.h"

/**
 * push - enters value at the end of a list
 * @data: Integer to store.
 *
 */

void push(int data)
{
  /* creates a new node */
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  new_node->data = data;
  new_node->next = NULL;

  struct Node *temp_head = head;

  /* checks if list is empty. if empty saves address of new node in head */
  if (head == NULL)
  {
    head = new_node;
    return;
  }

  /* navigates to end of node */
  while (temp_head->next != NULL)
  {
    temp_head = temp_head->next;
  }

  /* saves address of new node at next of last node  */
  temp_head->next = new_node;
}