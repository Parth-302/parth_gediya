#include<stdio.h>

int main(){
	char num;
	
	int a,b;
	
	printf("Please enter operators:-");
	scanf("%c",&num);
	
	if(num=='+'){
		printf("Add");
		printf("\nPlease enter first value:-");
		scanf("%d",&a);
		printf("\nPlease enter second value:-");
		scanf("%d",&b);
		printf("%d+%d=%d",a,b,a+b);
	}
	else if(num=='-'){
		printf("Add");
		printf("\nPlease enter first value:-");
		scanf("%d",&a);
		printf("\nPlease enter second value:-");
		scanf("%d",&b);
		printf("%d-%d=%d",a,b,a-b);
	}
	else if(num=='*'){
		printf("Add");
		printf("\nPlease enter first value:-");
		scanf("%d",&a);
		printf("\nPlease enter second value:-");
		scanf("%d",b);
		printf("%d*%d=%d",a,b,a*b);
	}
	else if(num=='%'){
		printf("Add");
		printf("\nPlease enter first value:-");
		scanf("%d",&a);
		printf("\nPlease enter second value:-");
		scanf("%d",&b);
		printf("%d%%%d=%d",a,b,a%b);
	}
	else if(num=='/'){
		printf("Add");
		printf("\nPlease enter first value:-");
		scanf("%d",&a);
		printf("\nPlease enter second value:-");
		scanf("%d",&b);
		printf("%d/%d=%d",a,b,a/b);
	}
	
	return 0;
}
