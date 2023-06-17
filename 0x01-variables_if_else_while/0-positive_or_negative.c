#include <stdio.h>
#include <time.h>
/**
 * main - Testing positive, negative, and zero numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
srand(time(0));
x = rand() - RAND_MAX / 2;
if (x > 0)
{
printf("%d positive number\n", x);
}
else if (x == 0)
{
printf("%d zero\n", x);
}
else
{
printf("%d negative number\n", x);
}
return (0);
}
