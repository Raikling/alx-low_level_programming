#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : number to be used
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int lastDig;
if (n < 0)
lastDig = -(n % 10);
else
lastDig = n % 10;
_putchar(lastDig + '0');
return (lastDig);
}
