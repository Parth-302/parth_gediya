#include<stdio.h>

int main(){
	const float num = 8.8;
	int a,b,c;
	
	printf("enter two numbers :");
	scanf("%d,%d",&a,&b);
	
	c=a%b;
	
	printf("your result is :%d%%%d=%d",a,b,c);
	printf("\nyour number is :%f",num);
	
	return 0;
}
