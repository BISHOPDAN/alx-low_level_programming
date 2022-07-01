#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			i++;

		}
		e++;
	}
	putchar('\n');

	return (0);
}
