#include "main.h"

/**
* _isdigit - checks for a digit (0-9).
* @c:  checked number.
* Return: 1 if the number is a digit.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

else
return (0);
}
