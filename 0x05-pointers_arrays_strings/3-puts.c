/**
* _puts - writes the string
* @str: a pointer to the string
*
* Return: nothing
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);

}
_putchar('/n');


}
