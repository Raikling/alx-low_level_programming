#include "main.h"
/**
 *factorial - function returns the factorial
 *@n:number used for the factorial
 *Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
