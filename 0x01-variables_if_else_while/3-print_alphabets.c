#include <stdio.h>
/**
 * Entry - main point
 * program that prints alphabets in uppercase then lowercase
 * Return: 0 (Success)
 */
int main(void)
{
int i;
/*Print lowercase alphabet*/
int i =0;
while (i<26)
{
putchar('a' + i);
i++;
}
/*Print uppercase alphabet*/
int i=0;
while (i<26)
{
putchar('A' + i);
i++;
}
putchar('\n');
return (0);
}
