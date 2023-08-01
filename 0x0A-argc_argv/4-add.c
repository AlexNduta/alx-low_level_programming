#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - main entry point
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0 is always success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
