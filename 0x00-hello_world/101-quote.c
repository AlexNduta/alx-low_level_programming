#include <unistd.h>
/**
 * main-  A function that prints to the standard input
 * Return:  1 always  (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);

	return (1);
}
