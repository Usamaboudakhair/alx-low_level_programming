#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: put string.
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int lenS = 0, i;
	char n;

	while (s[lenS] != '\0')
	{
		lenS++;
	}

	for (i = 0; i < lenS / 2; i++)
	{
		n = s[i];
		s[i] = s[lenS - i - 1];
		s[lenS - i - 1] = n;
	}
}
