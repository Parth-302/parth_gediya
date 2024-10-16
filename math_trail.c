#include<stdio.h>
int main(){

	int a,b,c,d;
	
	printf("enter three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	
	d=a+b+c;
	
	printf("your result is:%d+%d+%d=%d\n",a,b,c,d);
	return 0;
}
