#include <stdio.h>
/**
 * main - Print numbers in base 16
 * Return: 0 (Success)
 */
int main(void)
{
int d;
char low;
for (d = 0; d < 10; d++)
putchar('0' + d);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
