#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	for (*s = 0; *s >= (s + 1); s++)
	{
		_putchar(*s);
		_strlen_recursion("%ld", s);
	}
	_putchar('\n');
}
