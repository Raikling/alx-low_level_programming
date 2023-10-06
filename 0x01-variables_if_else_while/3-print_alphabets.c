#include <stdio.h>
/**
 * main - Prints alphabets both lower and upper cast
 *
 * Return: Always 0.
 */

int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
