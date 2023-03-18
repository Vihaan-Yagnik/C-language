#include <stdio.h>

void main()
{
	char a;
	int b;
	printf("enter alphabet: ");
	scanf("%c",&a);
	
	
	if(b=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'))
{
	printf("%c is vowel",a);
}
else
{
	printf("%c is consonent",a);
}
	
}
