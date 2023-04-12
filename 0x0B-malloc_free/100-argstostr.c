#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 *@av: an array of argument strings
 *@ac: the number of arguments
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int n, m, len = 0, k = 0;
	char *strg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < ac; n++)/* Calculate total length of all arguments */
	{
		for (m = 0; av[n][m]; m++)
		{
			len++;
		}
		len++; /* account for the '\n' after each argument */
	}
	/* Allocate memory for concatenated string */
	strg = malloc(sizeof(char) * (len + 1));
	if (strg == NULL)
	{
		return (NULL);
	}
	/* Concatenate arguments into one string */
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			strg[k++] = av[n][m];
		}
		strg[k++] = '\n'; /* add newline character after each argument */
	}
	strg[k] = '\0'; /* add null terminator at the end of the string */
	return (strg);
}
