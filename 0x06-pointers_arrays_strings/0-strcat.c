#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (src_len >= 0)
	{
		*(dest + dest_len) = *(src + src_len);
		if (*(src + src_len) == '\0')
			break;
		dest_len++;
		src_len++;
	}
	return (dest);
}
