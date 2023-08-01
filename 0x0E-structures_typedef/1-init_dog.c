#include "dog.h"
/**
 *init_dog - function to initialise our dog structure
 *@d: pointer to the dog structure
 *@name: pointer to the name of the dog
 *@age: age of the dog
 *@owner: pointer to the cutodian of the dog
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
