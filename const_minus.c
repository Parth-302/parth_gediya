#include<stdio.h>

int main(){
	const int num = 33;
	int a,b,c;
	
	
	printf("enter two numbers :");
	scanf("%d,%d",&a,&b);
	
	c=a-b;
	
	printf("your result is:%d-%d=%d",a,b,c);
	printf("\nyour number is:%d",num);
	
	return 0;
}
