#include <stdio.h>
/**
 * main - Entry point
 *
 * Program that prints alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
++ch;
putchar(ch);
++ch;
}
putchar('\n');
return (0);
}
