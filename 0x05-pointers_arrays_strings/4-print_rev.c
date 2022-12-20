#include "main.h"
#include "_putchar.c"
/**
* print_rev - Write a function that prints a reverse string, followed by a new line, to
* stdout.
*
* @s: This is my input string
* Return - nothing
*/

void print_rev(char *s)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++);
for (j = i-1; s[j] != '\0'; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
