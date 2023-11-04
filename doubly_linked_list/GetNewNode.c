#include "node.h"

/**
 * GetNewNode - creates a new node in dynamic memory.
 * @x: data to insert in node
 *
 * Returns address of node in dynamic memory
 */

struct Node *GetNewNode(int x)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = x;
  newNode->prev = NULL;
  newNode->next = NULL;

  return newNode;
}
