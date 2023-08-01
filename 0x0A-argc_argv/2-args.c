#include <stdio.h>
/**
 *main - entry function
 *@argc: argument function
 *@argv: argumnet vector
 *
 *Return: 0 is always sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
