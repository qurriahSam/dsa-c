#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

/**
 * File: node.h
 * Desc: Header file that defines a new type struct node.
 */

/**
 * struct Node - describes a node
 * @data: Integer to store.
 * @next: The address of next node.
 */

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};

extern struct Node *head;

struct Node *GetNewNode(int x);
void InsertAtHead(int x);

void PrintList();
void PrintListRev();

#endif