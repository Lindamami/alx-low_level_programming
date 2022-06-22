#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	{
		_puts_recursion("A recursion");
	}
	_puts_recursion("\n");

}
