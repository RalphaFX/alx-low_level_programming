#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns pointer to a 2D array of int
 * @width: Columns
 * @height: rows
 *
 * Return: pointer to 2D array => success, NULL => Fail
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(p[i]);
			free(p);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
