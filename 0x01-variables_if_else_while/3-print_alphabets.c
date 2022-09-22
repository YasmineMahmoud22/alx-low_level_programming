#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char c, t;
for (c = 'a'; c <= 'z'; ++c)
putchar (c);
for (t = 'A'; t <= 'Z'; ++t)
putchar (t);
putchar ('\n');
return (0);
}
