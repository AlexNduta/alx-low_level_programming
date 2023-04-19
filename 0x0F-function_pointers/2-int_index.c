#include "function_pointers.h"
/**
 *int_index - searches for an integer in an array
 *@array: the array in question
 *@size: The size of our arrray
 *@cmp: pointer to a function
 *
 *Return:  0 if sucessful:
 */
int int_index(int *array, int size, int (*cmp) (int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
