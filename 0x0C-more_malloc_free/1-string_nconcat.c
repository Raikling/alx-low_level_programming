#include "main.h"


/**
 * string_nconcat - concatenates two strings
 * @s1 : string
 * @s2 : string
 * @n : int
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int size1, size2, i, j;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (size1 = 0; s1[size1] != '\0'; size1++)
;
for (size2 = 0; s2[size2] != '\0'; size2++)
;

str = malloc(size1 + n + 1);
if (str == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];

for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++
}
str[i] = '\0';
return (str);
}
