#include <stdio.h>
/**
 *  main - Prints numbers between 00 to 99.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int dan;
	int n;

	for (dan = 48; ch <= 57; dan++)
	{
		for (n = 49; n <= 57; n++)
		{
			putchar(dan);
			putchar(n);
			if (dan != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
