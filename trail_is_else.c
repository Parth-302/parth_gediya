#include<stdio.h>

int main(){
	int num;
	
	printf("Plese enter your value more than 100 :");
	scanf("%d",&num);
	
	if(num>100){
		printf("your corect your value is %d",num);
	}
	else{
		printf(" sorry please check again");
	}
	
	return 0;
}
