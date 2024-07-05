#include "arrays.h"


ArrayC *get_array_c(int size)
{
    ArrayC *arr = (ArrayC*)malloc(sizeof(ArrayC));
    arr->array = (int*)malloc(sizeof(int)*size);
    arr->size = size;

    for(int i = 0; i<size; i++){
        arr->array[i] = 0;
    }

    return arr;
}

void reset_array_c(ArrayC *arr)
{
    for(int i = 0; i<arr->size; i++){
        arr->array[i] = 0;
    }
}

int insert_value(ArrayC *arr, int position, int value)
{
    if(position >=0 && position<arr->size){
        if(arr->array[position]==0){
            arr->array[position] = value;
            return SUCCESS;
        }else{
            return INIT_POS;
        }
    }
    return INVALID_POS;
}

int update_value(ArrayC *arr, int position, int value)
{
    if(position >=0 && position<arr->size){
        if(arr->array[position]!=0){
            arr->array[position] = value;
            return SUCCESS;
        }else{
            return NOT_INIT_POS;
        }
    }
    return INVALID_POS;
}

int remove_value(ArrayC *arr, int position)
{
    if(position >=0 && position<arr->size){
        if(arr->array[position]!=0){
            arr->array[position] = 0;
            return SUCCESS;
        }else{
            return POS_EMPTY;
        }
    }
    return INVALID_POS;
}
