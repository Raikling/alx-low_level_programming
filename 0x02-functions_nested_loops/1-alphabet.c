#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase
 * Return: Always (0)
 */
void print_alphabet(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return (0);
}
