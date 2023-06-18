#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Entry point
* program to print the value of n and state whether it is greater than,
* equal to zero, or less than 6
* Return: Always 0 (Success)
*/
int main(void)
{
int digit, n;
srand(time(0));
n=rand()-RAND_MAX/2;
/* MY CODE */
digit= n % 10;
if(digit>5)
{
printf("Last digit of %d is %d and is greater than 5\n",n,digit);
}
else if(digit == 0)
{
printf("Last digit of %d is %d and is 0\n",n,digit);
}
else if(digit<6 && digit!=0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",n,digit);
}
return (0);
}
