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
	float *age;
	char  *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
