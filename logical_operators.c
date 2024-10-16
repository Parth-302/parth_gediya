#include<stdio.h>

int main(){
	int a = 100;
	int b = 100;
	
	printf("equal %d",a==b&&b==a);
	
	printf("\nnot equal %d",a!=b&&b!=a);
	
	printf("\ngreter than %d",a>b&&b>a);
	
	printf("\nsmaller than %d",a<b&&b<a);
	
	printf("\ngreter than %d",a>=b&&b>=a);
	
	printf("\nsmaller than %d",a<=b&&b>=a);
	
	printf("\nequal %d",a==b||b==a);
	
	printf("\nnot equal %d",a!=b||b!=a);
	
	printf("\ngreter than %d",a>b||b>a);
	
	printf("\nsmaller than %d",a<b||a<b);
	
	printf("\ngreter than %d",a>=b||b>=a);
	
	printf("\nsmaller than %d",a<=b||b<=a);
	
	printf("\nequal %d",!(a==b));
	
	printf("\nnot equal %d",!(a!=b));
	
	printf("\ngreter than %d",!(a>b));
	
	printf("\nsmaller than %d",!(a<b));
	
	printf("\ngreter than %d",!(a>=b));
	
	printf("\nsmaller than %d",!(a<=b));
	
	return 0;
}
