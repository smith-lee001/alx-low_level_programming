#include <stdio.h>
/**
 * main - Entry point
 *Code that prints digits of base 10 starting zero
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int numb = 0;
while (numb <= 9)
{
printf("%d", numb);
++numb;
}
printf("\n");
return (0);
}
