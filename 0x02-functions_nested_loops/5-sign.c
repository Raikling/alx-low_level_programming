#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n : the integer that will be checked
 * Return: 1 if n > zero, -1 if n <0 and 0 if n=0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
