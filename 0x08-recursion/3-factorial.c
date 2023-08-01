#include "main.h"
/**
 *factorial - calculates the factorial of a given number
 *@n: the input number
 *
 *Return: the value of the current factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
