#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if(l == 'q' || l == 'e')
		{
			l++;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
