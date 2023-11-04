#include "node.h"

struct Node *head = NULL;

int main()
{

  InsertAtHead(6);
  InsertAtHead(3);
  InsertAtHead(5);
  InsertAtHead(2);
  InsertAtHead(4);
  InsertAtHead(5);

  PrintList();
  PrintListRev();

  return 0;
}