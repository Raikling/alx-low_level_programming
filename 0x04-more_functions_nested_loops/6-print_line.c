#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of character_
 * Return: nothing
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
break;
}
_putchar(95);
}
_putchar('\n');
}
