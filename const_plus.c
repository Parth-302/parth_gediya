#include<stdio.h>

int main(){
	
	const int num = 77;
	int a,b,c;
	
	
	printf("enter two num:");
	scanf("%d,%d",&a,&b);
	
	c=a+b;
	
	printf("your result is:%d+%d=%d",a,b,c);
	printf("\nyour num is:%d",num);
	
	return 0;
}
