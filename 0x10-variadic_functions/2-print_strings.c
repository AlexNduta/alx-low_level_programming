#include "variadic_functions.h"
/**
 *print_strings - prints numbers seperated by comas
 *@seperator: character following printed number
 *@n: mandatory variable
 *Return : void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	size_t i = 0;
	char *str;
	va_list letters;

	va_start(letters, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(letters, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(letters);
}

