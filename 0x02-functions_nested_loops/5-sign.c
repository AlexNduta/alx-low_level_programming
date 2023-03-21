#include "main.h"
/**
 *print_sign checks fo use cases and prints characters
 *@n: the variable that determines everything
 *
 *Return: 1 if the value is greater,
 *				0 if its zero ,
 *				-if the number is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
