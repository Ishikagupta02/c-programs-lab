#include<stdio.h>
int main()
{
float a,b,h;
float area;
printf("enter the value for teo bases and height of the trapezium: \n");
scanf("%f%f%f", &a, &b, &h);
area = 0.5*(a+b)*h;
printf("area of the trapezium is: %.3f",area);
return 0;
}