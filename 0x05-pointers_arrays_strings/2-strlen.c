/**
* _strlen - get the length of sting
* @s: a pointer to the string
*
* Return: length of string
*/
int _strlen(char *s)
{
int count = 0;
while(*s != '\0'){
count ++;
s++;
}
return(count);

}
