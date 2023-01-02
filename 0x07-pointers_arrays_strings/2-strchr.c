#include "main.h"

/**
* _strchr - fill memory .
* @s: pointer to char
* @c: character
* Return: pointer
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != 0)
{
if (s[i] == c)
return (&s[i]);
i++;
}
if (s[i] == c)
return (&s[i]);
return ('\0');
}
