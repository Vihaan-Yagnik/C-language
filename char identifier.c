#include <stdio.h>

void main()
{
char a;

	printf("enter a key: ");
	scanf("%c",&a);
	
if(a >= 65 && a <= 90)
{
	printf("charcter is uppercase");
}
else if(a>=97 && a<=122)
{
	printf("charcter is lowercase");
}
else if(a>=65 && a<=90)
{
	printf("charcter is uppercase");
}
else if(a>=48 && a<=57)
{
	printf("charcter is digit");
}
else
{
	printf("special symbol");
}
}
