#include<stdio.h>

void main()
{
int a,b,c,d;
printf("enter number");
scanf("%d", &a);
b=a-1;
while(b>=1)
{
	c=c*a;
	a=a-1;
	b=b-1;
}
printf("The factorial value is %d", c);
}

