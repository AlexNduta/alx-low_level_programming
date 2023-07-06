#include "main.h"
/**
 * flip_bits - flip to get to different numbers.
 * @n:  1st number
 * @m:  2nd number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int num, i;

	num = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			num++;
		result <<= 1;
	}

	return (num);
}
