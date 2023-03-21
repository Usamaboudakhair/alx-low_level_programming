#include "main.h"

/**
 * print_alphabet_x10 - print all characters in lower case 10 times
 */
void print_alphabet_x10(void)
{
	int l, i = 0;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		i++;
		_putchar('\n');
	}
}
