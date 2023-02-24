
#ifndef stack_h
#define stack_h
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// struct node {
//   char data;
//   struct node *nextPtr;
// };

// typedef struct node Node;
// typedef struct node *NodePtr;

typedef struct {
  NodePtr top;
  int size;
} Stack;

typedef Stack *StackPtr;

void push(StackPtr s, int value);
char pop(StackPtr s);
void pop_all(StackPtr s);

void push(StackPtr s, int value) {
  Node *new_node = (NodePtr)malloc(sizeof(struct node));
  if (new_node) {
    new_node->data = value;
    new_node->nextPtr = s->top;
    s->top = new_node;
    s->size++;
  }
}

char pop(StackPtr s) {
  NodePtr t = s->top;
  char value;
  if ((s->size > 0)) {
    value = t->data;
    s->top = t->nextPtr;
    s->size--;
    free(t);
    return value;
  }
  // printf("No more stacks.\n");
  return 0;
}

void pop_all(StackPtr s) {
  while (s->size > 0) {
    pop(s);
    s->size--;
  }
}

#endif
