/**
* _puts - writes the string
* @str: a pointer to the string
*
* Return: nothing
*/
void _puts(char *str)
{
int i = 0;
while (*str != '\0')
{
printf("%c",*str);
i++;
str++;
}


}
