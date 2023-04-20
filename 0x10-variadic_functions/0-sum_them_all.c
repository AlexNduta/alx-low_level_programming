#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - calculates the sum.
 *@n: the mandatory variable
 *Return: 0 when null is 0 and sum when sucessful
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t i = 0;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 1; i <= n; i++)
	{
		int num = va_arg(numbers, int);

		sum = sum + num;
	}
	va_end(numbers);
	return (sum);
}
