#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s = '\0')
	{
		_putchar(*s);
		_strlen_recursion("%ld\n", s);
	}
}
