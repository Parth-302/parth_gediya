#include<stdio.h>

int main(){
	int a,b,c;
	
	a=10;
	b=20;

	printf("A=%d\nB=%d",a,b);
	
	
	c=a;
	a=b;
	b=a;
	
	printf("\nupdating value\nA=%d\nB=%d",a,b);
	
	return 0;
}
