#include "src/arrays.h"
#include "/Library/Ruby/Gems/2.6.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








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

        UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((array->array[i])), (((void*)0)), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

    }

}



void test_erase_array_c(void)

{

    ArrayC *array;

    int size = 10;

    array = get_array_c(10);

    for(int i = 0; i<size; i++){

        array->array[i] = i;

        UnityAssertEqualNumber((UNITY_INT)((i)), (UNITY_INT)((array->array[i])), (((void*)0)), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

    }

    reset_array_c(array);

    for(int i = 0; i<size; i++){

        UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((array->array[i])), (((void*)0)), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

    }

}



void test_insert_value(void)

{

    ArrayC *array;

    int size = 10;

    array = get_array_c(10);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((insert_value(array, 4, 5))), (((void*)0)), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((array->array[4])), (((void*)0)), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((insert_value(array, 4, 5))), (((void*)0)), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((insert_value(array, 10, 10))), (((void*)0)), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

}



void test_update_value(void)

{

    ArrayC *array;

    int size = 10;

    array = get_array_c(10);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((insert_value(array, 4, 5))), (((void*)0)), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((update_value(array, 3, 7))), (((void*)0)), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((array->array[4])), (((void*)0)), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((update_value(array, 4, 6))), (((void*)0)), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((6)), (UNITY_INT)((array->array[4])), (((void*)0)), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((update_value(array, 10, 10))), (((void*)0)), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT);

}



void test_remove_value(void)

{

    ArrayC *array;

    int size = 10;

    array = get_array_c(10);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((insert_value(array, 4, 5))), (((void*)0)), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((array->array[4])), (((void*)0)), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((remove_value(array, 4))), (((void*)0)), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((array->array[4])), (((void*)0)), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((remove_value(array, 10))), (((void*)0)), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((remove_value(array, 0))), (((void*)0)), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_INT);

}
