#include "main.h"
/**
 *3-puts.c - 3-puts.c
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
