#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alphabet;
        char x;


        x = 1;
        while (x <= 10)

	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
                   { 
                       _putchar(alphabet);
                   }

                 x++;
                 _putchar(’\n’);
	}
	
        return 0;
}
			

