#include <stdio.h>
/**
 * main - Prints alphabets.
 *
 * Return: Always 0.
 */

int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < alpha.size; i++)
{
putchar(alpha[i]);
}
putchar("\n");
return (0);
}