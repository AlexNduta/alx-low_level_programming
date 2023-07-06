#include "main.h"
/**
 *binary_to_uint - convert an input astring to int
 *@b: points to a sttring 0 & 1
 *
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int output;

	output = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		output <<= 1;
		if (b[i] == '1')
			output += 1;
	}
	return (output);
}
