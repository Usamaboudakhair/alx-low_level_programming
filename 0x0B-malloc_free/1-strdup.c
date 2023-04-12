#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated memory, or NULL.
 */

char *_strdup(char *str)
{
	char *dupl;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	dupl = malloc(sizeof(char) * (len + 1));
	if (dupl == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupl[i] = str[i];
	}
	return (dupl);
}
