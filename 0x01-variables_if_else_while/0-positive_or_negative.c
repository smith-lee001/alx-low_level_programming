#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Testing positive, negative, and zero numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d positive number\n", n);
}
else if (n == 0)
{
printf("%d zero\n", n);
}
else
{
printf("%d negative number\n", n);
}
return (0);
}
