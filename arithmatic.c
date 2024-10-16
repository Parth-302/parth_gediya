#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("enter to numbers :");
	scanf("%d,%d",&a,&b);
	
	c=a+b;
	printf("\nyour result is :%d+%d=%d",a,b,c);
	
	c=a-b;
	printf("\nyour result is :%d-%d=%d",a,b,c);
	
	c=a*b;
	printf("\nyour result is :%d*%d=%d",a,b,c);
	
	c=a/b;
	printf("\nyour result is :%d/%d=%d",a,b,c);
	
	c=a%b;
	printf("\nyour reslt is :%d%%d=%d",a,b,c);
	
	return 0;
}
