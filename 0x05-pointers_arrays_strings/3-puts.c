#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}

