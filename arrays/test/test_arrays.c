#ifdef TEST

#include <stdio.h>
#include "unity.h"

#include "arrays.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_get_array_c(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    for(int i = 0; i<size; i++){
        TEST_ASSERT_EQUAL(0, array->array[i]);
    }
}

void test_erase_array_c(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
    }
    reset_array_c(array);
    for(int i = 0; i<size; i++){
        TEST_ASSERT_EQUAL(0, array->array[i]);
    }
}

void test_insert_value(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    TEST_ASSERT_EQUAL(0, insert_value(array, 4, 5));
    TEST_ASSERT_EQUAL(5, array->array[4]);
    TEST_ASSERT_EQUAL(2, insert_value(array, 4, 5));
    TEST_ASSERT_EQUAL(1, insert_value(array, 10, 10));
}

void test_update_value(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    TEST_ASSERT_EQUAL(0, insert_value(array, 4, 5));
    TEST_ASSERT_EQUAL(3, update_value(array, 3, 7));
    TEST_ASSERT_EQUAL(5, array->array[4]);
    TEST_ASSERT_EQUAL(0, update_value(array, 4, 6));
    TEST_ASSERT_EQUAL(6, array->array[4]);
    TEST_ASSERT_EQUAL(1, update_value(array, 10, 10));
}

void test_remove_value(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    TEST_ASSERT_EQUAL(0, insert_value(array, 4, 5));
    TEST_ASSERT_EQUAL(5, array->array[4]);
    TEST_ASSERT_EQUAL(0, remove_value(array, 4));
    TEST_ASSERT_EQUAL(0, array->array[4]);
    TEST_ASSERT_EQUAL(1, remove_value(array, 10));
    TEST_ASSERT_EQUAL(4, remove_value(array, 0));
}

void test_switch_position(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(10);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
    }
    TEST_ASSERT_EQUAL(1, switch_position(array, 10, 1));
    TEST_ASSERT_EQUAL(1, switch_position(array, 1, 10));
    TEST_ASSERT_EQUAL(0, switch_position(array, 4, 8));
    TEST_ASSERT_EQUAL(8, array->array[4]);
    TEST_ASSERT_EQUAL(4, array->array[8]);
}

void test_reverse_arr(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");
    reverse_arr(array);
    for(int i = 0; i<size; i++){
        TEST_ASSERT_EQUAL(size-i-1, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");

    size = 11;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");
    reverse_arr(array);
    for(int i = 0; i<size; i++){
        TEST_ASSERT_EQUAL(size-i-1, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");
}

void test_r_shift_arr(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");
    TEST_ASSERT_EQUAL(1, r_shift_arr(array, 10));
    TEST_ASSERT_EQUAL(0, r_shift_arr(array, 6));
    for(int i = 0; i<size; i++){
        printf("%d, ", array->array[i]);
    }
}

void test_l_shift_arr(void)
{
    ArrayC *array;
    int size = 10;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
        printf("%d, ", array->array[i]);
    }
    printf("\n");
    TEST_ASSERT_EQUAL(1, l_shift_arr(array, 10));
    TEST_ASSERT_EQUAL(0, l_shift_arr(array, 2));
    for(int i = 0; i<size; i++){
        printf("%d, ", array->array[i]);
    }
}

void test_srand_array(void)
{
    ArrayC *array;
    int size = 256;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
    }
    srand_array(array);
    print_array(array);
}

void test_find_max_arr(void)
{
    ArrayC *array;
    int size = 100;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
    }
    TEST_ASSERT_EQUAL(99, find_max_arr(array));
    srand_array(array);
    print_array(array);
    TEST_ASSERT_EQUAL(99, array->array[find_max_arr(array)]);
}

void test_find_min_arr(void)
{
    ArrayC *array;
    int size = 100;
    array = get_array_c(size);
    for(int i = 0; i<size; i++){
        array->array[i] = i;
        TEST_ASSERT_EQUAL(i, array->array[i]);
    }
    TEST_ASSERT_EQUAL(0, find_min_arr(array));
    srand_array(array);
    print_array(array);
    TEST_ASSERT_EQUAL(0, array->array[find_min_arr(array)]);
}

#endif // TEST
