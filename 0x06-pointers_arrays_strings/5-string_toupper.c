#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *@str: input string
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
