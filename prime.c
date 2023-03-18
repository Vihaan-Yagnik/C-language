#include <stdio.h>

void main(){
	int n,a;
	printf("enter n:");
	scanf("%d",&n);
	a=prime(n);
	if(a==0){
		printf("prime");
	}
	else{
	printf("not prime");
	}
}
prime(int n){
	int i,c;
	for(i=2;i<=n/2;i++){
	if(n%i==0){
		return n;
	}
	else{
		return 0;
	}
}
}
