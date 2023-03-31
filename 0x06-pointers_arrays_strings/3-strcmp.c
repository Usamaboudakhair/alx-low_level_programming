#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *@s1: first string
 *@s2: second string
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}
	return (b);
}
