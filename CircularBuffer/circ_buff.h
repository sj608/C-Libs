#ifndef CIRC_BUFF_H
#define CIRC_BUFF_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define NO_ERR 0
#define ERR 1


typedef struct circ_buff{
    int len;
    int head;
    int tail;
    bool isEmpty;
    bool isFull;
    int *buff;
}circ_buff;

circ_buff* init_buff(circ_buff* buff_struct, int buff_len);


void free_buff(circ_buff* buff_struct);


#endif