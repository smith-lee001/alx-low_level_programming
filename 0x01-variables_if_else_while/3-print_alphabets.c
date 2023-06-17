#include <stdio.h>
/**
 * main - Entry point
 * Code that prints alphabets in upper then lower case
 */
int main(void) {
for (char c = 'a'; c <= 'z'; c++) {
putchar(c);
}
for (char c = 'A'; c <= 'Z'; c++) {
putchar(c);
}
putchar('\n');
return 0;
}
