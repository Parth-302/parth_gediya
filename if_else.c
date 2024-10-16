#include<stdio.h>

int main(){
	int num;
	
	printf("enter your value more than 20 :");
	scanf("%d",&num);
	
	if(num>=20){
		printf("you are corect your value is :%d",num);
	}
	else{
		printf("sorry check again");
	}
	
	return 0;
}
