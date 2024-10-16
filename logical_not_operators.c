#include<stdio.h>

int main(){
	int a = 1000;
	int b = 1000;
	
	printf("equal %d",!(a==b));
	
	printf("\nnot equal %d",!(a!=b));
	
	printf("\ngreter thqan %d",!(a>b));
	
	printf("\nsmaller than %d",!(a<b));
	
	printf("\ngreter than %d",!(a>=b));
	
	printf("\nsmaller than %d",!(a<=b));
	
	return 0;
}
