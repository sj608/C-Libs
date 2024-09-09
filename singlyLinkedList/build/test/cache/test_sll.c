#include "src/sll.h"
#include "/Library/Ruby/Gems/2.6.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_sll_init_node(void)

{

    Node*head = init_node(10);

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((head->item)), (((void*)0)), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((((void*)0))), (UNITY_INT)((head->next)), (((void*)0)), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}



void test_sll_insert_at_tail(void)

{

    Node*head = init_node(0);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((head->item)), (((void*)0)), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((((void*)0))), (UNITY_INT)((head->next)), (((void*)0)), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);



    for(int i=1; i<10;i++){

        insert_at_tail(head, i);

    }

    display(head);

}
