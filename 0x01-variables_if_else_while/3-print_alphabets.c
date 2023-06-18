#include <stdio.h>
/**
 * Entry - main point
 * program that prints alphabets in uppercase then lowercase
 * Return: 0 (Success)
 */
int main(void)
{
int i = 0;
/* Print lowercase alphabet */
while (i < 26)
{
putchar('a' + i);
i++;
}
i = 0;
/* Print uppercase alphabet */
while (i < 26)
{
putchar('A' + i);
i++;
}
putchar('\n');
return (0);
}
