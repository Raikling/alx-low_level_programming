#include "main.h"
/**
 * print_square - print a square #
 * @size : of square
 */
void print_square(int size)
{
int row, col;
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
_putchar(35);
}
_putchar('\n');
}
}
