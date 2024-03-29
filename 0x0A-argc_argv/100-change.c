#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc : int
 * @argv : array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, changeCents = 0, money = atoi(argv[1]);
		int cents [] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				changeCents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", changeCents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
