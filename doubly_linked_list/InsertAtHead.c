#include "node.h"

/**
 * InsertAtHead - Inserts node at the beginning of list
 * @x: data to be stored in the node
 */

void InsertAtHead(int x)
{
  struct Node *newNode = GetNewNode(x);

  if (head == NULL)
  {
    head = newNode;
    return;
  }

  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}