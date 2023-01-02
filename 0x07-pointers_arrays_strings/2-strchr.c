#include "main.h"

/**
* _strchr - fill memory .
* @s: pointer to char
* @c: character
* Return: pointer
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);

}
else
s++;
}
if (*s == c)
return (s);
else
return (0);
}
return (s);
}
