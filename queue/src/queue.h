#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define QUEUE_FULL 2
#define QUEUE_EMPTY 3

typedef struct queue_arr{
    int* queue;
    int size;
    int isempty;
    int isfull;
    int tail;

}queue_arr;

int init_queue(queue_arr* _queue, int size);
int enqueue(queue_arr* _queue, int val);
int dequeue(queue_arr* _queue);
int peek(queue_arr* _queue);

void disaply_queue(queue_arr* _queue);

#endif // QUEUE_H
