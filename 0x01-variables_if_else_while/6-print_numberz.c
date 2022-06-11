#include <stdio.h>

/**
 * main - Prints all single digits base 10 number
 * only using putchar and without char variables
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num);

	putchar("\n");

	return (0);
}
