#include <stdio.h>
/**
 * main - prints number of args passed
 * @argc: int
 * @argv: pointer to array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
