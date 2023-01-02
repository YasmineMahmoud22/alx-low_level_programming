#include "main.h"

/**
* _memset - fill memory .
* @s: pointer to char
* @b: character
* @n: integer
* Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a ;

for (a = 0 ; a < n ;  a++){
s[a] = b ;
}
return (s);
}
