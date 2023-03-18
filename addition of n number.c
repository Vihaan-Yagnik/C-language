#include <stdio.h>

void main()
{
int i=0,n,sum=0;
printf("enter n:");
scanf("%d",&n);
while(i<=n)
{
sum=i+sum;
i++;
}
printf("%d",sum);
}
