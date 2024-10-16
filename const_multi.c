#include<stdio.h>

int main(){
	const int value = 45;
	int a,b,c;
	
	printf("enter two numbers:");
	scanf("%d,%d",&a,&b);
	
	c=a*b;
	
	printf("your result is :%d*%d=%d",a,b,c);
	printf("\nyour value is %d",value);
	
	return 0;
}
