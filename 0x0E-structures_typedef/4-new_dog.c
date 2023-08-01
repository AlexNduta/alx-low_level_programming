#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len1, len2;
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	len1 = strlen(name) + 1;
	doggy->name = malloc(len1 * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->name, name);

	doggy->age = age;

	len2 = strlen(owner) + 1;
	doggy->owner = malloc(len2 * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->owner, owner);

	return (doggy);
}

