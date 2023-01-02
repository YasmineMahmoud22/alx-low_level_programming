#include "main.h"

/**
* _strspn - fill memory .
* @s: pointer to char
* @accept: character
* Return: pointer
*/

unsigned int _strspn(char *s, char *accept)
{
int letter;
int pos = 0;

while (s[pos])
{
for (letter = 0; accept[letter]; letter++)
{
if (accept[letter] == s[pos])
{
break;
}
}
if (!accept[letter])
{
break;
}
pos++;
}
return (pos);
}
