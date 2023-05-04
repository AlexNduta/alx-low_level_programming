#include "main.h"
/**
 *binary_to_unint - convert an input astring to int
 *@b: input string
 *
 *Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	size_t output = 0;
	const char *ptr =b;
	/* chek if input string is null */
	if (b == NULL)
		return (0);
 /*initialise a variable to carry the result*/

	while (*ptr)
	{
		if (*ptr == '0' || *ptr == '1')
		{
			output = (output << 1) + (*ptr - '0');
			ptr++;
		} else
		{
			return (0);
		}
	}
	return (output);
}


