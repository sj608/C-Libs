#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int item;
    struct Node *next;
}Node;

Node* init_node(int val);
void insert_at_tail(Node* head, int val);


void display(Node* head);


#endif // SLL_H
