#include <stdio.h>
/**
 * main - Entry point
 *Code that prints digits of base 16 in lowercase
 *using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int numb = 48; /*48:decimal rep of '0'*/
while (numb <= 102) /*102;decimal rep of 'f'*/
{
putchar(numb);
if (numb == 57)
numb += 39;
++numb;
}
putchar('\n');
return (0);
}

