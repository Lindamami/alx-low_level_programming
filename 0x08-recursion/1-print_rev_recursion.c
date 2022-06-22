#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse followed by a new line.
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
		_putchar(--*s);
	}
	_putchar('\n');
}
