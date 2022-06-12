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
		if (num == 2)
			putchar(num);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
