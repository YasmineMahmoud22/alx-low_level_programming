#include "main.h"

/**
* more_numbers - Prints the numbers from 0-14 10 times.
*/
void more_numbers(void)
{
int a, b;

for (a = 0; a <= 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
_putchar((b / 10) + '0');
else
_putchar((b % 10) + '0');
}
_putchar('\n');

}

}
