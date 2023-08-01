
#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index.
 * @n: num  of i
 * @index: starts from 0 of the bit to set
 * Return: 1 on sucess, or -1 if on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = ~(1 << index);
	*n = *n & num;

	return (1);
}
