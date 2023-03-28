#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: input string
 *
 * Return: i.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
