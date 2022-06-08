#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i * 10);
	}
	_putchar('\n');
}
			

