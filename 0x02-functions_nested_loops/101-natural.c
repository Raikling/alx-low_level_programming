#include "main.h"
/**
 * main - program to sum the natural num divadable by 3 or 5
 * Return: always (0)
 */
int main(void)
{
  int i, sum;
  for (i = 0; i < 1024; i++)
    {
      if ((i % 3 == 0) || (i % 5 == 0))
	sum += sum;
    }
  printf("%d\n", sum);
  return (0);
}
