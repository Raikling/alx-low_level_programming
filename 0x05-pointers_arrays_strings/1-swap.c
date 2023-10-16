#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: int 1
 * @b: int 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
