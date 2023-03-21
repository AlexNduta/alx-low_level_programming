#include "main.h"
/**
 *print_sign checks fo use cases and prints characters
 *Return: 1 if the value is greter, 0 if its equal otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	{
		putchar('-');
		return (-1);
	}
}
