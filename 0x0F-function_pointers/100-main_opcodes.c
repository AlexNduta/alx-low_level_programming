#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @c: specific address of the main function
 * @m: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *c, int m)
{
	int i;

	for (i = 0; i < m; i++)
	{
		printf("%.2hhx", c[i]);
		if (i < m - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	r = atoi(argv[1]);
	if (r < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, r);
	return (0);
}
