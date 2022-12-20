/**
* rev_string - Write a function that prints a reverse string
*
*
* @s: This is my input string
* Return - nothing
*/

void rev_string(char *s)
{
char word;
int i, length1 ,length2;
length1 = 0;
length2 = 0;

while(s[length1] != '\0')
{
length1++;
}
length2 = length1 - 1;
for(i = 0; i < length1; i++)
{
word = s[i];
s[i] = s[length2];
s[length2] = word;
length2 -= 1;
}
}
