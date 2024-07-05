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

int switch_position(ArrayC *arr, int position1, int position2)
{
    int temp;
    if(position1>=0 && position1<arr->size && position2>=0 && position2<arr->size){
        temp = arr->array[position1];
        arr->array[position1] = arr->array[position2];
        arr->array[position2] = temp;
        return SUCCESS;
    }
    return INVALID_POS;
}

void reverse_arr(ArrayC *arr)
{
    int temp;
    for(int i = 0; i<arr->size/2; i++){
        temp = arr->array[i];
        arr->array[i] = arr->array[arr->size-i-1];
        arr->array[arr->size-i-1] = temp;
    }
}

int r_shift_arr(ArrayC *arr, int shift_val)
{
    if(shift_val>=0 && shift_val<arr->size){
        for(int i=arr->size-1; i>=0; i--){
            if(i-shift_val>=0){
                arr->array[i] = arr->array[i-shift_val];
            }else{
                arr->array[i] = 0;
            }
        }
        return SUCCESS;
    }
    return INVALID_POS;
}

int l_shift_arr(ArrayC *arr, int shift_val)
{
    if(shift_val>=0 && shift_val<arr->size){
        for(int i=0; i<arr->size; i++){
            if(i+shift_val<arr->size){
                arr->array[i] = arr->array[i+shift_val];
            }else{
                arr->array[i] = 0;
            }
        }
        return SUCCESS;
    }
    return INVALID_POS;
}

#ifdef TEST

void print_array(ArrayC *arr)
{
    printf("Array Print \n");
    for(int i=0; i<arr->size; i++){
        printf("%d, ", arr->array[i]);
    }
    printf("\n");
}

void srand_array(ArrayC *arr)
{
    srand(time(NULL) * arr->size);
    int i;
    int total = arr->size * 100;
    for (i = 0; i < total; i++)
    {
        switch_position(arr, rand() % arr->size, rand() % arr->size);
    }
}

#endif