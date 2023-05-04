#include "main.h"
/**
 *binary_to_unint - convert an input astring to int
 *@b: points to a sttring 0 & 1
 *
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t output = 0;
	int i = 0;
	/* chek if input string is null */
	if (b == NULL)
		return (0);
 /*initialise a variable to carry the result*/

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		output = output * 2 +(b[i] - '0');
	i++;
	}
	return (output);
}


