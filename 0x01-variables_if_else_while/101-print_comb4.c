#include <stdio.h>

/**
 * main - Entry point
 * Code that prints all possible different combinations of three digits
 * using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb1 = 0, numb2, num3;
while (numb1 <= 9)
{
numb2 = 0;
while (numb2 <= 9)
{
num3 = 0;
while (num3 <= 9)
{
if (numb1 != numb2 && numb1 < numb2 && numb2 != num3 && numb2 < num3)
{
putchar(numb1 + '0');
putchar(numb2 + '0');
putchar(num3 + '0');
if (numb1 + numb2 + num3 != 24)
{
putchar(',');
putchar(' ');
}
}
num3++;
}
numb2++;
}
numb1++;
}
putchar('\n');
return (0);
}

