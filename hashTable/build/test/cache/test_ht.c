#include "src/ht.h"
#include "/Library/Ruby/Gems/2.6.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_ht_hash_func(void)

{

    printf("Jacob = %u\n", hash_func("Jacob"));

    printf("Laura = %u\n", hash_func("Laura"));

    printf("Steven = %u\n", hash_func("Steven"));

    printf("Jay = %u\n", hash_func("Jay"));

}



void test_delete_person(void)

{

    init_people_table();

    insert_person("Jacob", 25);

    insert_person("Steven", 31);

    insert_person("Jay", 44);



    display_table();

    delete_person("Jacob");

    display_table();

}



void test_display_table(void)

{

    init_people_table();

    insert_person("Jacob", 25);

    insert_person("Steven", 31);

    insert_person("Jay", 44);



}
