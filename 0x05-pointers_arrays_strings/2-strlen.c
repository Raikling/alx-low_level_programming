/**
 * _strlen - return the size of a string
 * @s: string to get its length
 * Return: length of @s
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);
}
