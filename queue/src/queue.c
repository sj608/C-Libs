#include "queue.h"

int init_queue(queue_arr* _queue, int size)
{
    _queue->queue = (int*)malloc(sizeof(int)*size);
    if(_queue->queue == NULL){
        return 1;
    }
    _queue->size = size;
    //init queue array
    for(int i=0; i<_queue->size; i++){
        _queue->queue[i] = 0;
    }
    _queue->isempty = 1;
    _queue->isfull = 0;
    _queue->tail = 0;
    return 0;
}

int enqueue(queue_arr* _queue, int val)
{
    // if the queue is full return the full status
    if(_queue->isfull){
        return QUEUE_FULL;
    }
    _queue->queue[_queue->tail] = val;
    _queue->tail++;
    // Check if the queue is full
    if(_queue->tail == _queue->size){
        _queue->isfull = 1;
    }
    _queue->isempty = 0;
    return 0;
}

int dequeue(queue_arr* _queue)
{
    // if the queue is empty return the empty status
    if(_queue->isempty){
        return QUEUE_EMPTY;
    }
    for(int i=0; i<_queue->size; i++){
        if(i<_queue->size){
            _queue->queue[i] = _queue->queue[i+1];
        }else{
            _queue->queue[i]=0;
        }
    }
    _queue->tail--;
    _queue->isfull = 0;
    if(_queue->tail == 0){
        _queue->isempty = 1;
    }
    return 0;
}

int peek(queue_arr* _queue)
{
    return _queue->queue[0];
}

void disaply_queue(queue_arr* _queue)
{
    printf("Print Queue\n");
    for(int i=0; i<_queue->size; i++){
        printf("%d, ", _queue->queue[i]);
    }
    printf("\n");
    if(_queue->isempty){
        printf("Queue is Empty\n");
    }
    if(_queue->isfull){
        printf("Queue is Full\n");
    }
    printf("Curr Tail  at %d\n", _queue->tail);
}

