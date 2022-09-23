#include "main.h"

/**
* print_diagonal - Draws a diagonal line using the \ character.
* @n: The number of \ characters to be printed.
*/
void print_diagonal(int n)
{
int x, y;

for (y = 1; y <= n; y++)
{
for (x = 1; x < y; x++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n < 1)
_putchar('\n');
}
