#include "main.h"

/**
 * get_bit - returns a bit at given index.
 * @n: bits to check with
 * @index: which to check bit
 *
 * Return: the value of the bit at specific index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	num = 1 << index;
	res = n & num;
	if (res == num)
		return (1);

	return (0);
}
