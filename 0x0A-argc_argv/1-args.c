#include <stdio.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 is always success
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		count = argc - 1;
	} else
	{
		count = 0;
	}
	(void)argv;
		printf("%d\n", count);
	return (0);
}
