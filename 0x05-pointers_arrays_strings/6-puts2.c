#include "main.h"
/**
 * puts2 - prints every other char
 *@str: string
 */
void puts2(char *str)
{
int length = 0, index = 0;
char *y = str;
int i;
while (*y != '\0')
{
y++;
length++;
}
index = length - 1;
for (i = 0; i <= index; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
