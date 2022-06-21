#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: bytes of memory
 * @src: memory area to be copied from
 * @dest: dest memory area to copy to
 * Returb: returns the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
