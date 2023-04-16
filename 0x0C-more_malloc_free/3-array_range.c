#include "main.h"
/**
 *array_range -Creates a range of integers
 *@min: the stating value
 *@max: the final value
 *
 *Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int total_size = 0;
	int *range;
	int x = 0;

	if (min > max)
		return (NULL);

	total_size = max - min + 1;

	range = malloc(sizeof(int) * total_size);
	if (range == 0)
		return (NULL);

	for (x = 0; min <= max; x++)
		range[x] = min++;

	return (range);
}
