#include <main.h>

/**
 * main - Prints all single digits base 10 numbers
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
