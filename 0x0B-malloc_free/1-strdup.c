#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate memory space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int x, y = 0;
if (str == NULL)
return (NULL);
x = 0;
while (str[i] != '\0')
x++;
aaa = malloc(sizeof(char) * (x + 1));
if (aaa == NULL)
return (NULL);
for (y = 0; str[y]; y++)
aaa[y] = str[y];
return (aaa);
}
