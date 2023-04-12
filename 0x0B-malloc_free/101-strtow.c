#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in
 * Return: The number of words in @str.
 */
static int count_words(char *str)
{
	int i, in_word = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: If successful - a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;
		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';
		j += len;
	}
	words[word_count] = NULL;
	return (words);
}
