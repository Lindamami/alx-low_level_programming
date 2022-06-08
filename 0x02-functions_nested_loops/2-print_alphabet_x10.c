#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alphabet;
        char x;

	for (alphabet = 'a'; alphabet  <= 'z'; alphabet++)
	{
		for (x = 1; x <= 10; x++)
                   { 
                       _putchar("%c\n”, alphabet);
                       _putchar(x);
                   }
	}
	_putchar('\n');
        return (0);
}
			

