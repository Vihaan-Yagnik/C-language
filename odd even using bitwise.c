#include <stdio.h>

void main()
{
int a;
   printf("enter ur number: ");
   scanf("%d",&a);

if((a&1)== 0)
{
	printf("even");
}
else{
	printf("odd");
}
}
