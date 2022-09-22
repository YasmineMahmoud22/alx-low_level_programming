#include "main.h"

/**
* times_table - prints the times table of an integer starting with zero
* Return: Always 0.
*/

void times_table(void)
{
int a, b, TimesValue;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
TimesValue  = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (b == 0)
{
_putchar('0');

}
else if (TimesValue >= 10)
{
_putchar((TimesValue / 10) + '0');
_putchar((TimesValue % 10) + '0');
}
else if ((TimesValue < 10) && (b != 0))
{
_putchar(' ');
_putchar((TimesValue % 10) + '0');
}
}
_putchar('\n');
}
}
