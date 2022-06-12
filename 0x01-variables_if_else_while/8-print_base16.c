#include <stdio.h>

/**
 * main - Prints all the numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 97; j <= 102; j++)
		{
			putchar("%d", i);
			putchar('j \n');
		}
	}

	return (0);
}
