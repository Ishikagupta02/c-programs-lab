#include<stdio.h>
int main()
{
char c;
printf("enter a character: ");
scanf("%C", &c);
printf("ASCII value of %c = %d", c, c);
return 0;
}