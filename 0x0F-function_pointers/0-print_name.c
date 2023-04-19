#include "function_pointers.h"
/**
 *print_name - prints a name on stdout
 *@name: name to be printed
 *@f: name of the pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
