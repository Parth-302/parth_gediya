#include<stdio.h>
int main(){
	const int num =100;
	int a,b,c;
	
	printf("enter two numbers :");
	scanf("%d,%d",&a,&b);
	
	c=a+b;
	printf("\nyour result is :%d+%d=%d",a,b,c);
	
	c=a-b;
	printf("\nyour result is :%d-%d=%d",a,b,c);
	
	c=a*b;
	printf("\nyour result is :%d*%d=%d",a,b,c);
	
	c=a%b;
	printf("\nyour result is :=%d",a,b,c);
	
	a+=b;
	printf("\nyour result is :%d",a);
	
	a-=b;
	printf("\nyour result is :%d",a);
	
	a*=b;
	printf("\nyour result is :%d",a);
	
	a%=b;
	printf("\nyour result is :%%d",a);
	
	printf("\nyour number is :%d",num);
	
	return 0;
}
