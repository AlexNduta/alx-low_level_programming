#include "dog.h"
/**
 *print_dog - prints the values pf the dog structure
 *@d: pointer to the dog  structure
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

