/**
* _puts - writes the string
* @str: a pointer to the string
*
* Return: nothing
*/
void _puts(char *str)
{
while (*str != '\0')
{
printf("%c", *str);
str++;
}


}
