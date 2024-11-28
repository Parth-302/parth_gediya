#include<stdio.h>

#define a 44


int main(){
	
	printf("macro is:-%d",a);
	#ifdef c 55
	printf("\nmacro is:-%d",c);
	#elif defined(c)
	printf("\nc is defined\n");
	#else
	printf("\na is not define");
	#endif
	#ifdef c
	printf("\nc is not defined");
	#else
	printf("\nc is defined");
	#endif	
	return 0;
}
