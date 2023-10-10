#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: to be checked
 * Return: 1, 0, -1 and prints the sign
 */
int print_sign(int n)
{
if (n > 1)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
}
