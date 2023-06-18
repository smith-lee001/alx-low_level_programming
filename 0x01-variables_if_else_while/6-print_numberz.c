#include <stdio.h>
/**
 * main - Entry point
 *Code that prints digits of base 10 starting zero
 *using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int numb = 0;
while (numb <= 9)
{
putchar(numb + '0');
++numb;
}
putchar("\n");
return (0);
}

