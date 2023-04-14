#include "main.h"
/**
 *_calloc - allocates memory dynamically
 *@nmemb: number of items
 *@size: the amount of required memory
 *
 *Return: pointer to a memory alocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *pointer = malloc(sizeof(nmemb) * size);
	if (nmemb == 0 || size == 0)
		return (NULL);

	if (pointer  == 0)
		return (NULL);
	return (pointer);
	}
