#include <stdio.h>

void main()
{
float a,hra,da,gt;

	printf("enter your salary: ");
	scanf("%f",&a);
	
if(a<=10000)
	{
		hra=a*0.2;
	da=a*0.8;
	
	gt=a+hra+da;
	printf("%f",gt);

	}
else if(a<=20000)
	{
		hra=a*0.25;
	da=a*0.9;
	
	gt=a+hra+da;
	printf("%f",gt);

	}
else if(a<=30000)
	{
		hra=a*0.3;
	da=a*0.95;
	
	gt=a+hra+da;
	printf("%f",gt);

	}
else
	{
	hra=a*0.3;
	da=a*0.95;
	
	gt=a+hra+da;
	printf("%f",gt);

	}
}
