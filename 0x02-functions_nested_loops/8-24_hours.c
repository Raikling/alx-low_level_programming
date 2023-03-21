#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: every minute of 24h
 */
void jack_bauer(void)
{
int i, j, n, m;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
{
for (n = 0; n <= 5; n++)
{
for (m = 0; m <= 9; m++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(58);
_putchar(n + '0');
_putchar(m + '0');
_putchar('\n');
}
}
}
}
}
}
