#ifndef HT_H
#define HT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERSON_NAME_MAX 10
#define MAX_PEOPLE 10


typedef struct Person{
    int age;
    char name[PERSON_NAME_MAX];
}Person;



void delete_person(char* person);
unsigned int hash_func(char* name);
int insert_person(char* name, int age);
void init_people_table(void);
void display_table(void);

#endif // HT_H
