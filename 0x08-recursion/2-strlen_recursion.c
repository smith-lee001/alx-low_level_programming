#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string to be measured
 * Return: lenth of  string
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
