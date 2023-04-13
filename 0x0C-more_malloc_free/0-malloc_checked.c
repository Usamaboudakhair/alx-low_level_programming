#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -allocates memory using malloc.
 * @b: amount of byte.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
