#include "sll.h"

Node* init_node(int val)
{
    Node*node = (Node*)malloc(sizeof(Node));
    node->item = val;
    node->next=NULL;
    return node;
}

void insert_at_tail(Node* head, int val)
{
    while(head->next!= NULL){
        head = head->next;
    }
    head->next = init_node(val);
}

void display(Node* head)
{
    while(head->next!= NULL){
        printf("Value: %d, ", head->item);
        head = head->next;
    }
    printf("Value: %d, ", head->item);
}
