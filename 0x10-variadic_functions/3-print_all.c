#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: types of arguments passed to function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x;
	int sig;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				sig = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				sig = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				sig = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				sig = 0;
				break;
			default:
				sig = 1;
				break;
		}
		if (format[x + 1] != '\0' && sig == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(a_list);
}
