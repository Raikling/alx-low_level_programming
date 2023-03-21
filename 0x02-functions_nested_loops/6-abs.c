#include "main.h"
/**
 * _abs - computes the absolute value of an intege
 * @c : the number to be computed
 * Return: Absolute value of number of number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int absv;
absv = c * -1;
return (absv);
}
return (c);
}
