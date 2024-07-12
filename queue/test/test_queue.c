#ifdef TEST

#include "unity.h"

#include "queue.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_init_queue(void)
{
    queue_arr queue;
    int size = 10;
    init_queue(&queue, size);
    TEST_ASSERT_EQUAL(1, queue.isempty);
    TEST_ASSERT_EQUAL(0, queue.isfull);
    TEST_ASSERT_EQUAL(size, queue.size);
    for(int i=0; i<queue.size; i++){
        TEST_ASSERT_EQUAL(0, queue.queue[i]);
    }
}

void test_enqueue(void)
{
    queue_arr queue;
    int size = 10;
    init_queue(&queue, size);
    disaply_queue(&queue);
    for(int i=0; i<queue.size; i++){
        enqueue(&queue, i);
        disaply_queue(&queue);
    }
}

void test_dequeue(void)
{
    printf("\n\n\n");
    queue_arr queue;
    int size = 10;
    init_queue(&queue, size);
    for(int i=0; i<queue.size; i++){
        enqueue(&queue, i);
    }
    disaply_queue(&queue);
    for(int i=0; i<queue.size; i++){
        dequeue(&queue);
        disaply_queue(&queue);
    }
}

#endif // TEST
