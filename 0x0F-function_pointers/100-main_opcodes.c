#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: nunber of args
 * @argv: array of args
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
char *p = (char *)main;
int cd;

if (argc != 2)
printf("Error\n"), exit(1);

cd= atoi(argv[1]);
if (cd < 0)
printf("Error\n"), exit(2);
while (cd--)
printf("%02hhx%s", *p++, cd ? " " : "\n");
return (0);
}
