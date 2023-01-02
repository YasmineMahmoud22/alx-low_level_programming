#include "main.h"

/**
* _memcpy - fill memory .
* @dest: pointer to char
* @src: pointer to char
* @n: integer
* Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a ;

for (a = 0 ; a < n ;  a++){
dest[a] = src[a] ;
}
return (dest);
}
