#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space with copy of string
 *@str : string
 *Return: 0
 */

char *_strdup(char *str)
{
int i = 1, size = 1;
char *m;

if (str == NULL)
return (NULL);

for (; str[size] != \0; size++)
m = (size * sizeof(str));

if (m == 0)
return (NULL);
else
{
for (; i == size; i++)
m[i] = str[i];
}
return (0);
}
