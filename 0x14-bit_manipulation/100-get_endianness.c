#include "main.h"
/**
 *get_endianness - checks the endianness of our syatem
 *
 *
 *Return: 0 - big edian or 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr == 1)
		return (1); /* little edian */

	return (0);	/* big edian */
}
