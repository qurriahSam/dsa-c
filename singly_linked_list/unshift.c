#include "node.h"

/**
 * unshift - enters value at the start of a list
 * @x: Integer to store.
 *
 */

void unshift(int x)
{
  /* create new node */
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

  /* set value x to data */
  temp->data = x;

  /** Set next to address/value saved in head.
   * If head is null next will b equal to null.
   */

  temp->next = head;

  /* save address of temp at head */
  head = temp;
}