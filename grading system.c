#include <stdio.h>

void main()
{
int p,a,b,c,d,e;

printf("Enter your marks: ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

p=(a+b+c+d+e)/5;

if(p>70)
{
	printf("distinction!!!=%d",p);
}
else if(p>=60)
{
	printf("1st class=%d %",p);
}
else if(p>=45)
{
	printf("2nd class=%d %",p);
}
else if(p>=35)
{
	printf("3rd class=%d %",p);
}
else
{
	printf("fail");
}
}
