#include <stdio.h>
/**
 *  main - Prints numbers between 00 to 99.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int dan;
	int n;

	for (dan = 48; dan <= 57; dan++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > dan)
			{
				putchar(dan);
				putchar(n);
				if (dan != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
