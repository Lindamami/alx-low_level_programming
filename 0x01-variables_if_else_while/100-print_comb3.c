#include <stdio.h>

/**
 * main - Prints all possible combinations of 2 and 3
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 2; num <= 3; num++)
	{
		putchar((num % 10) + '0');
		if (num == 3)
			continue;

		putchar(',');
		putchar(' ');	
	}

	putchar('\n');

	return (0);
}
