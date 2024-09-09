#include "ht.h"

Person *people[MAX_PEOPLE];

unsigned int hash_func(char* name)
{
    int name_len = strnlen(name, PERSON_NAME_MAX);
    unsigned int hash_val = 0;
    for(int i = 0; i<name_len; i++){
        hash_val += (name[i]*name_len);
        hash_val = hash_val%MAX_PEOPLE;
    }
    return hash_val;
}

int insert_person(char* _name, int _age)
{
    Person* person=(Person*)malloc(sizeof(Person));
    strcpy(person->name, _name);
    person->age = _age;
    if(people[hash_func(person->name)]!=NULL){
        return 1;
    }
    people[hash_func(person->name)] = person;
    return 0;
}

void delete_person(char* _name)
{
    unsigned int indx = hash_func(_name);
    if(people[indx] != NULL && (strncmp(_name, people[indx]->name, PERSON_NAME_MAX) == 0)){
        free(people[indx]);
        people[indx] = NULL;
    }
}

void init_people_table(void)
{
    for(int i = 0; i<MAX_PEOPLE; i++){
        people[i] = NULL;
    }
}

void display_table(void)
{
    printf("Start\n");
    for(int i = 0; i<MAX_PEOPLE; i++){
        if(people[i]!=NULL){
            printf("Name: %s, age: %d, insdex: %d\n", people[i]->name, people[i]->age, i);
        }
    }    
    printf("End\n\n");
}