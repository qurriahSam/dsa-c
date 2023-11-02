#include "node.h"

/**
 * Delete - removes value at position given
 * @position: Position to delete.
 *
 */

void Delete(int position)
{
  struct Node *temp_head = head;

  if (position == 1)
  {
    head = temp_head->next; // change value of head to next node
    free(temp_head);        // deletes the previous head node
    return;
  }

  int i = 1;
  while (i < position - 1) // moves temp head to point to the node before the one to delete
  {
    temp_head = temp_head->next;

    // checks if while loop has finished looping through list
    if (temp_head == NULL)
    {
      printf("invalid Position\n");
      return;
    }
    i++;
  }

  // check if temp head is at last node
  if (temp_head->next == NULL)
  {
    printf("invalid Position\n");
    return;
  }

  struct Node *node_to_delete = temp_head->next; // points to the node to be deleted
  temp_head->next = node_to_delete->next;        // assigns next of the previous node to next of the node to be deleted
  free(node_to_delete);                          // deletes the node to be deleted
}