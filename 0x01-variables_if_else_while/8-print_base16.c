#include <stdio.h>

/**
 * main - Prints all the numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for(i = 0; i <= 15; i++)
		putchar("%d", i);
	putchar('\n');

	return (0);
}
