#include <stdio.h>

void main()
{
char op;
int a,b,c;

printf("enter method: ");
scanf("%ch",&op);
printf("enter 2 numbers: ");
scanf("%d %d",&a,&b);

switch(op)
{
	case '+':
		c=a+b;
		printf("%d",c);
		break;
	case '-':
		c=a-b;
		printf("%d",c);
		break;
	case '*':
		c=a*b;
		printf("%d",c);
		break;
	case '/':
		c=a/b;
		printf("%d",c);	
		break;
    default: printf("enter correct method");
	break;	
}
}
