#include <stdio.h>
/**
 * main - Entry point
 *Code that prints alphabets in lowercase reverse
 *using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
--ch;
}
putchar('\n');
return (0);
}

