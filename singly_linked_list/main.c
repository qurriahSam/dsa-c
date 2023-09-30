#include "node.h"

struct Node *head = NULL;

int main()
{
  int count, num;

  printf("How many numbers: ");
  scanf("%d", &count);

  while (count != 0)
  {
    printf("Enter Number: ");
    scanf("%d", &num);
    putchar('\n');
    unshift(num);
    count--;
  }

  print_list();

  return 0;
}