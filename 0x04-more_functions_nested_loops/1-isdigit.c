#include "main.h"
/**
 * _isdigit - checks if our passed char is a digit
 *@c: the character in question
 *
 *Return: 0 or 1
 */
int _isdigit(int c)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (isdigit(c))
		return (1);
	else
		return (0);
	}
	return (0);
}
