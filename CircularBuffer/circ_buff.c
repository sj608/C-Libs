#include "circ_buff.h"

circ_buff* init_buff(circ_buff* buff_struct, int buff_len){
    buff_struct->len = buff_len;
    buff_struct->isEmpty = true;
    buff_struct->isFull = false;
    buff_struct->head = 0;
    buff_struct->tail = 0;

    buff_struct->buff = (int*)malloc(buff_len * sizeof(int));
    if(buff_struct->buff == NULL){
        return NULL;
    }

    return buff_struct;
}

void free_buff(circ_buff* buff_struct){
    free(buff_struct->buff);
    buff_struct->buff = NULL;
}





void peak_buffer(circ_buff* buff_struct){
    for(int i = 0; i < buff_struct->len; i++){
        printf("Buffer[%d] = %d\n", i, buff_struct->buff[i]);
    }
}


int main(){
    circ_buff buff;

    init_buff(&buff, 10);

    printf("Buffer length: %d\n", buff.len);
    printf("Buffer Head Indx: %d\n", buff.head);
    printf("Buffer Tail Indx: %d\n", buff.tail);
    printf("Is Buffer Empty?: %d\n", buff.isEmpty);
    printf("Is Buffer Full?: %d\n", buff.isFull);
    printf("Buffer Address: %p\n", buff.buff);

    peak_buffer(&buff);



    free_buff(&buff);
    printf("Buffer Address: %p\n", buff.buff);

    return NO_ERR;
}