#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by
 * but for multiples of three prints fizz
 * and for the multiples of five prints buzz
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
{
else if (i % 5 == 0 && 1 % 3 != 0)
printf(" Buzz");
{
else if (i % 3 == 0 && 1 % 5 == 0)
printf(" FizzBuzz");
{
else if (i == 1)
{
printf("%d", i);
{
else
{
printf("%d", i);
}
}
printf("\n");
return (0);
}
