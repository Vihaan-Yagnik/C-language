#include <stdio.h>

void main()
{
int i=1,n=1,OddCount=1,EvenCount=1;

while(1){

printf("\t enter i: ");
scanf("%d",&i);

if(i%2==0){
printf("\n even: %d",OddCount);
i++;
OddCount=OddCount+1;
}
else{
	printf("\n odd: %d",EvenCount);
	i++;
EvenCount=EvenCount+1;
}
}
}
