#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("enter two numbers :");
	scanf("%d,%d",&a,&b);
	
	a+=b;
	printf("your result is :=%d",a);
	
	a-=b;
	printf("\nyour result is :=%d",a);
	
	a*=b;
	printf("\nyour result is :%d",a);
	
	a%=b;
	printf("\nyour result is :%d",a);
	
	
	return 0;
	
}
