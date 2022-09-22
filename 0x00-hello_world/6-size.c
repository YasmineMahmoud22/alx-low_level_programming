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
long long int LONGLONG;
float FL;

printf("Size of a char: %llu byte"), sizeof(CHARTYPE);
printf("Size of an int: %llu byte(s)"), sizeof(INTTYPE);
printf("Size of a long int: %llu byte(s)"), sizeof(LONGINT);
printf("Size of a long long int: %llu byte(s)"), sizeof(LONGLONG);
printf("Size of a float: %llu byte(s)"), sizeof(FL);
return (0);
}
