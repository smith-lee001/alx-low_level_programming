#include <stdio.h>

/**
 * main - Entry point
 * Code that prints all possible combinations of two two digits
 * using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb1 = 0, numb2;
while (numb1 <= 99)
{
numb2 = numb1;
while (numb2 <= 99)
{
if (numb2 != numb1)
{
putchar((numb1 / 10) + 48);
putchar((numb1 % 10) + 48);
putchar(' ');
putchar((numb2 / 10) + 48);
puchar((numb1 % 10) + 48);
if (numb1 != 98 || numb2 != 99)
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
return (0);
}
