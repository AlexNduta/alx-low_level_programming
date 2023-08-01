#include "main.h"
/**
 *malloc_checked - check if  memory has been allocated
 *@b: number of integers to be passed
 *
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *checker = malloc(b);

	if (checker == 0)
		exit(98);
	return (checker);
}
