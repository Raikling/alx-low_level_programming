#include "main.h"
#include <stdio.h>
/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
char stri[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(stri[i]);
}
_putchar('\n');
return (0);
}
