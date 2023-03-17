#include <stdio.h>
/**
 * main - prints alphabets in lower and upper case
 * Return: 0 (success)
 */

int main(void)
{
char low, upr;

for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (upr = 'A'; upr <= 'Z'; upr++)
putchar(upr);
putchar('\n');
return (0);
}
