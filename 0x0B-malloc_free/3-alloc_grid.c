#include "main.h"
/**
 *alloc_grid - allocates memory to a 2d array
 *@width: rows
 *@height: columns
 *
 *Return: pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **dimens;
	int i = 0, j = 0;
	int len;

	len = width * height;
	if (len < 0)
		return (NULL);

	dimens = (int **)malloc(sizeof(int *) * height);
	if (dimens == 0)
		return (NULL);

	while (i < height)
	{
		dimens[i] = (int *) malloc(sizeof(int) * width);
		if (dimens == 0)
		{
			for (i--; i >= 0; i--)
				free(dimens[i]);
			free(dimens);
			return (NULL);
		}
	i++;
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			dimens[i][j] = 0;

	return (dimens);
}
