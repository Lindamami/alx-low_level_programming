#include "main.h"

/**
 * int factorial - prints factorial of a given number.
 * @n: the given number
 * @factorial: the factorial of n
 * Return: -1 if n < 0 else return factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		_putchar(-1);
	else
		if (n > 0)
		{
			_putchar(n * factorial(n - 1));
		}
		else
			if (n == 0)
				return (1);
	return (0);
}
