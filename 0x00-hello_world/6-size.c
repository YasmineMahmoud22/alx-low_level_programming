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

printf("Size of a char: %zu byte\n",sizeof(CHARTYPE));
printf("Size of an int: %zu byte(s)\n",sizeof(INTTYPE));
printf("Size of a long int: %zu byte(s)\n",sizeof(LONGINT));
printf("Size of a long long int: %zu byte(s)\n",sizeof(LG));
printf("Size of a float: %zu byte(s)\n",sizeof(FL));
return (0);
}
