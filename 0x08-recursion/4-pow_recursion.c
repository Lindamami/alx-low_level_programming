#include "main.h"

/**
 * _pow_recursion - returns the value of x raised by power of y.
 * @x: value to be raised
 * @y: number of times value is raised
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		_pow_recursion(x, y);
	return (0);
}
