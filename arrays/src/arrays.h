#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdint.h>
#include <stdlib.h>

#ifdef TEST
#include <stdio.h>
#include <time.h>
#endif 

#define SUCCESS 0
#define INVALID_POS 1
#define INIT_POS 2
#define NOT_INIT_POS 3
#define POS_EMPTY 4

typedef struct ArrayC{
    int *array;
    int size;
}ArrayC;

ArrayC *get_array_c(int size);
void reset_array_c(ArrayC *arr);

int insert_value(ArrayC *arr, int position, int value);
int update_value(ArrayC *arr, int position, int value);
int remove_value(ArrayC *arr, int position);

int switch_position(ArrayC *arr, int position1, int position2);
void reverse_arr(ArrayC *arr);
int r_shift_arr(ArrayC *arr, int shift_val);
int l_shift_arr(ArrayC *arr, int shift_val);
int find_max_arr(ArrayC *arr);
int find_min_arr(ArrayC *arr);

#ifdef TEST

void print_array(ArrayC *arr);
void srand_array(ArrayC *arr);

#endif

#endif // ARRAYS_H
