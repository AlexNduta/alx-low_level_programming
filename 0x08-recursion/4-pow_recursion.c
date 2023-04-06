#include "main.h"
/**
 *_pow_recursion - calculates the power of x raised to y
 *@x: the subset
 *@y: the superset
 *
 *Return: calculation of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y != 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
