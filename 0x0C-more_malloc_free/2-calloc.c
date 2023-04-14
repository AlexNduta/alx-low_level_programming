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
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	char *pointer = malloc(sizeof(nmemb) * size);

	if (pointer  == 0)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
	{
		pointer[x] = 0;

	return (pointer);
	}
