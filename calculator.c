#include <stdio.h>

void main()
{
int a,b,c;
char op;

printf("Enter method : ");
scanf("%c",&op);
printf("Enter 2 numbers : ");
scanf("%d %d",&a,&b);


if(op == '+')
{
	c=a+b;
	printf("%d",c);
}
else if(op == '-')
{
	c=a-b;
	printf("%d",c);
}
else if(op == '*'){
	c=a*b;
	printf("%d",c);
}
else if(op == '/'){
	c=a/b;
	printf("%d",c);
}

}
