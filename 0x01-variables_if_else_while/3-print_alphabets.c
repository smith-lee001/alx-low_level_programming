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
for (int i = 0; i < 26; i++)
{
putchar('a' + i);
}
/*Print uppercase alphabet*/
for (int i = 0; i < 26; i++)
{
putchar('A' + i);
}
putchar('\n');
return (0);
}
