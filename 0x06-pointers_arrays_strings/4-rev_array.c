#include "main.h"
/**
 *reverse_arra - reverse elements in an array
 *@a: pointer to  the array
 *@n: size of the array
 *
 *Return:void
 */
void reverse_array(int *a, int n)
{
	int temp[n];
	int i;

		for (i = n - 1; i  >= 0; i--)
		{
			temp[n - 1 - i] = a[i];
		}
		for (i = 0; i < n; i++)
		{
			a[i] = temp[i];
		}
}

