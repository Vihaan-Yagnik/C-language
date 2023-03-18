#include <stdio.h>

void main()
{
	int a,b,c;
	printf("enter number: ");
	scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
	if(b>c)
	 {
	 	printf("%d",b);
	 }
	else
	{
		printf("%d",c);
	 } 
	 
}
else if(b>c&&b>a)
 {  
    if(c>a)
	 {
	 	printf("%d",c);
	 }
	else
	{
		printf("%d",a);
	 } 
}
else if(c>a&&c>b)
 {  
    if(b>a)
	 {
	 	printf("%d",b);
	 }
	else
	{
		printf("%d",a);
	 } 	 
}
}
