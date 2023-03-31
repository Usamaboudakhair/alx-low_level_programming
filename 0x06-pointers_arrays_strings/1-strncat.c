#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (src_len < n)
	{
		*(dest + dest_len) = *(src + src_len);
		if (*(src + src_len) == '\0')
			break;
		dest_len++;
		src_len++;
	}
	return (dest);
}
