#include<stdio.h>

int main(){
	int a = 100;
	int b = 100;
	
	printf("equal %d",a==b||b==a);
	
	printf("\nnot equal %d",a!=b||b!=a);
	
	printf("\ngreter than %d",a>b||b>a);
	
	printf("\nsmaller than %d",a<b||b<a);
	
	printf("\ngreter than %d",a>=b||b>=a);
	
	printf("\nsmaller than %d",a<=b||b<=a);
	
	return 0;
}
