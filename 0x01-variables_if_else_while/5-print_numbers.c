#include <stdio.h>
/**
 * main - Entry point
 *
 * Code that will print single digits of base 10 starting zero
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
