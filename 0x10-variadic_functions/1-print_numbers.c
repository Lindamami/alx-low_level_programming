#include <variadic_functions.h>

/**
 * print_numbers - function prints numbers followed by a new line.
 * @n: is the number of integers passed to the function
 * @seperator: the string to be printed between numbers
 *
 * Return: numbers, dont print if seperator is NULL.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
