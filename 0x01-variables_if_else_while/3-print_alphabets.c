#include <stdio.h>
/**
 * main - Entry point
 * Code that prints alphabets in upper then lower case
 */
int main(void) {
char ch = 'a';
char CH = 'A';
/* IT WILL PRINT a-z */
while (ch<='z')
{
putchar(ch);
++ch
}
/* IT WILL PRINT A-Z */
while (CH<='Z')
{
putchar(CH);
++CH
}
putchar('\n');
return 0;
}
