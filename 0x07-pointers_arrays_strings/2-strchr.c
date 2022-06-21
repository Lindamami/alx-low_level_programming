#include "main.h"

/**
 * strchr - locates a character in a string
 * @c: the character
 * @s: the string
 * Return: returns the pointer to the first occurebce of the character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
