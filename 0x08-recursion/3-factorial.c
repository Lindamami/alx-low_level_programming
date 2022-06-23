#include "main.h"

/**
 * factorial - prints factorial of a given number.
 * @n: the given number
 * Return: -1 if n < 0 else return factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
