#include "main.h"

/**
 * _islower - Checks for lowercase characters 
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
int c;
int a;

for (a = 97; a <= 122; a++)
{

if (c == a)
{
return (1);
}

else
{
return (0);
}

}
