#include <stdio.h>

/**
 * main - Prints all possible combinations of 2 and 3
 *
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;

	if ((num1 = 2) && (num2 = 3))
	{
		putchar((num1 % 10) + '0');
		putchar((num2 % 10) + '0');
		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);
}
