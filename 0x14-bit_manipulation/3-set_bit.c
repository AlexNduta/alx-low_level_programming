#include "main.h"

/**
 * set_bit - set bit to 1 at a given index.
 * @index: starts from 0 of bit to set
 * @n: pointer  of i
 * Return: 1 if on sucess, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = 1 << index;
	*n = *n | num;

	return (1);
}
