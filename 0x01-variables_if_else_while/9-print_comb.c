#include <stdio.h>
/**
 * main - Entry point
 *Code that prints possible combinations of single digits
 *using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int numb = 0;
while (numb <= 9)
{
putchar('0' + numb);
if (numb != 9)
{
putchar(',');
putchar(' ');
}
++numb;
}
putchar('\n');
return (0);
}

