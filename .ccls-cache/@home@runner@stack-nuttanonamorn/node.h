//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//
#include <stdlib.h>
#include <stdio.h>
#ifndef linkedlist_h
#define linkedlist_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;




#endif
