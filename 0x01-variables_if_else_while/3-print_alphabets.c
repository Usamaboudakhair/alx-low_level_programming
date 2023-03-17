#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char up,lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		putchar(lo);
	}
	for (up = 'A'; up <= 'Z'; up++)
        {
                putchar(up);
        }
	putchar('\n');
	return (0);
}
