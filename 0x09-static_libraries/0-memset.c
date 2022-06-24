#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @n: bytes
 * @b: what to fill
 * @s: points to a memory
 * Return: returns the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *m = s;

	i = 0;
	for (i = 0; i < n; i++)
	{
		m[i] = b;
	}
	return (m);
}
