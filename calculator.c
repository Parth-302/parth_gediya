#include<stdio.h>

int main(){
	char num; 
	
	int a,b;
	
	printf("please enter an operator:-");
	scanf("%c",&num);

	
	if(num=='+'){
		printf("Add");
		printf("\nplease enter first value:-");
		scanf("%d",&a);
		printf("\nplease enter second value:-");
		scanf("%d",&b);
		printf("%d+%d=%d",a,b,a+b);
	}
	else if(num=='-'){
		printf("Add");
		printf("\nplease enter first value:-");
		scanf("%d",&a);
		printf("\nplease enter second value:-");
		scanf("%d",&b);
		printf("%d-%d=%d",a,b,a-b);
	}
	else if(num=='*'){
		printf("Add");
		printf("\nplease enter first value:-");
		scanf("%d",&a);
		printf("\nplease enter second value:-");
		scanf("%d",&b);
		printf("%d*%d=%d",a,b,a*b);
    }
	else if(num=='%'){
		printf("Add");
		printf("\nplease enter first value:-");
		scanf("%d",&a);
		printf("\nplease enter second value:-");
		scanf("%d",&b);
		printf("%d%%%d=%d",a,b,a%b);
	}
	
	else{
		printf("please enter correct operators");
	}
	return 0;
}
