#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabets
 * Return: nothing (void)
 */
void print_alphabet_x10(void)
{
int i, alpha;
for (i = 0; i < 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
