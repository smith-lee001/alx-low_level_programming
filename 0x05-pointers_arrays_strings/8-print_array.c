#include <stdio.h>
/**
 * print_array - function that prints n elemnts
 * @a: array name
 * @n: number of elemnts in the array
 * return: a and n inputs
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d,", a[i]);
}
if (i == (n - 1))
{
printf(", ");
}
printf("\n");
}
