#include "node.h"

struct Node *head = NULL;

int main()
{
  int pos;

  push(6);
  push(3);
  push(5);
  push(2);
  push(4);
  push(5);

  print_list();

  Reverse_list();
  print_list();

  return 0;
}