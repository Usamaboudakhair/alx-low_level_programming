#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory
 * containing the contents of s1, followed by the contents
 * of s2, and null.
 */
char *str_concat(char *s1, char *s2)
{
	char *xman;
	int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	xman = malloc(sizeof(char) * (len1 + len2 + 1));
	if (xman == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		xman[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		xman[i + j] = s2[j];
	}
	return (xman);
}
