#include "main.h"
/**
 *swap_int - used to swap variables
 *Returns: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
