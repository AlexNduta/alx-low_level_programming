#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the dog structure
 *@name: name given to the dog
 *@age: How old is the dog
 *@owner: who is the guardian to the dog
 *
 */
struct{
	char *name;
	float *age;
	char  *owner;
};
#include<stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
