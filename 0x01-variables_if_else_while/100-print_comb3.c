#include <stdio.h>

/**
 * main - Entry point
 * Code that prints all possible different combinations of two digits
 * using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb1 = 0, numb2;
while (numb1 <= 9)
{
numb2 = 0;
while (numb2 <= 9)
{
if (numb1 != numb2 && numb1 < numb2)
{
putchar(numb1 + '0');
putchar(numb2 + '0');
if (numb1 + numb2 != 17)
{
putchar(',');
putchar(' ');
}
}
numb2++;
}
numb1++;
}
putchar('\n');
return 0;
}
