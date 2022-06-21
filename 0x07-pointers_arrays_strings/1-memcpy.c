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
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
