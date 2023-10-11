#include "node.h"

/**
 * insert - enters value at the nth position of a list
 * @data: Integer to store.
 * @pos: position to store.
 *
 */

void insert(int data, int pos)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  new_node->data = data;

  if (pos == 1)
  {
    new_node->next = head;
    head = new_node;
    return;
  }

  struct Node *point_head = head;

  for (int i = 1; i < pos - 1; i++)
  {
    point_head = point_head->next;
  }

  new_node->next = point_head->next;
  point_head->next = new_node;
}