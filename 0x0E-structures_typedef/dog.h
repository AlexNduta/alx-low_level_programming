#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the dog structure
 *@name: name given to the dog
 *@age: How old is the dog
 *@owner: who is the guardian to the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
