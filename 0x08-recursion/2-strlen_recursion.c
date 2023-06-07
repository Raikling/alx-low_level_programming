#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - return the length of a string
 *@s: The string to be used
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recurion(s + 1);
}
return (len);
}
