#include "variadic_functions.h"
/**
 *print_numbers - prints numbers seperated by comas
 *@seperator: character following printed number
 *@n: mandatory variable
 *Return : void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	size_t i = 0;
	va_list numbers;

	va_start(numbers, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		int num = va_arg(numbers, int);

		printf("%d", num);
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(numbers);
}
