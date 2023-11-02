#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

/*
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
};

extern struct Node *head;

void unshift(int x);
void insert(int data, int pos);
void push(int data);
void Delete(int position);
void Reverse_list();

void print_list();

#endif