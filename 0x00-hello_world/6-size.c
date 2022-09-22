#include<stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int INTTYPE;
char CHARTYPE;
long int LONGINT;
long long int LG;
float FL;

printf("Size of a char: %llu byte\n"), (unsigned long)sizeof(CHARTYPE);
printf("Size of an int: %llu byte(s)\n"), (unsigned long)sizeof(INTTYPE);
printf("Size of a long int: %llu byte(s)\n"), (unsigned long)sizeof(LONGINT);
printf("Size of a long long int: %llu byte(s)\n"), (unsigned long)sizeof(LG);
printf("Size of a float: %llu byte(s)\n"), (unsigned long)sizeof(FL);
return (0);
}
