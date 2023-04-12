#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the 2 dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **agrid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	agrid = malloc(height * sizeof(int *));
	if (agrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		agrid[i] = malloc(width * sizeof(int));
		if (agrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(agrid[j]);
			free(agrid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			agrid[i][j] = 0;
		}
	}
	return (agrid);
}
