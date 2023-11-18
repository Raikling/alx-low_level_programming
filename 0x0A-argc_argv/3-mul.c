#include <stdio.h>

/**
 * main - prints the result of multiplication
 * @argc : int
 * @argv : pointer to array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = argv[1] * argv[2];
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
