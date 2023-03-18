#include <stdio.h>

void main()
{
float a,b,c,d;

printf("enter units: ");
scanf("%f",&a);

if(a<=50)
{
	b=a*0.5;
	c=b+b*0.2;
	printf("%f",c);
}
else if(a<=150)
{
	b=50*0.5+(a-50)*0.75;
	c=b+b*0.2;
	printf("%f",c);
}
else if(a<=250)
{
	b=50*0.5+100*0.75+(a-150)*1.25;
	c=b+b*0.2;
	printf("%f",c);
}
else if(a>=500)
{
	b=50*0.5+100*0.75+(150)*1.25+(a-500)*1.5;
	c=b+b*0.2;
	printf("%f",c);
}
}
