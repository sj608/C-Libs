#ifdef TEST

#include "unity.h"

#include "sll.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_sll_init_node(void)
{
    Node*head = init_node(10);
    TEST_ASSERT_EQUAL(10, head->item);
    TEST_ASSERT_EQUAL(NULL, head->next);
}

void test_sll_insert_at_tail(void)
{
    Node*head = init_node(0);
    TEST_ASSERT_EQUAL(0, head->item);
    TEST_ASSERT_EQUAL(NULL, head->next);

    for(int i=1; i<10;i++){
        insert_at_tail(head, i);
    }
    display(head);
}

#endif // TEST
