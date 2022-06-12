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
		putchar(i);

	for (j = 97; j <= 102; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
