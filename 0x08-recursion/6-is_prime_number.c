#include "main.h"

/**
 * is_prime_number - returns 1 if a prime number.
 * @n: the number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if ((n / n) == 1 && (n / 1) == n)
		return (1);
	else
		return (0);
}
