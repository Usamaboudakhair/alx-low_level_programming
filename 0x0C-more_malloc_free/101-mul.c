#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: 1 if any number is zero, 0 otherwise.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}
	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * _initialize_array - set memory to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
	int i;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}
/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int ln = strlen(argv[n]);
	int i;

	for (i = 0; i < ln; i++)
	{
		if (!isdigit(argv[n][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (ln);
}
/**
 * _multiply - multiplies two numbers
 * @a: first number as string.
 * @b: second number as string.
 *
 * Return: pointer to result string.
 */
char *_multiply(char *a, char *b)
{
	int la = strlen(a);
	int lb = strlen(b);
	char *res = malloc(la + lb + 1);
	int i, j, k, carry;

	if (res == NULL)
}
