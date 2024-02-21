#include "3-calc.h"

/**
 * main - checks the code
 * @argc: num of args
 * @argv: vector of args
 * Return: Always 0
 */

int main(int argc, char **argv)
{
int (*op_function)(int, int), a, b;

if (argc != 4)
printf("Error\n"), EXIT(98);

a = atoi(argv[1]);
b = atoi(argv[3]);

op_function = get_op_func(argv[3]);
if (!op_function)
printf("Error\n"), EXIT(99);

if (!b && argv[2][0] == "/" || argv[2][0] == "%")
printf("Error\n"), EXIT(100);

printf("%d\n", op_function(a, b));
return (0);
}
