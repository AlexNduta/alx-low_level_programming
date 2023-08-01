#include "main.h"
/**
 * cap_string - capitalise every letter
 *@str : character pointer
 *Return: char
 *
 */
char *cap_string(char *str)
{
	int i;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || strchr(seperators, str[i - 1]) != NULL)
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
