#include<stdio.h>

int main(){
	char name;
	int num;
	
	printf("please enter your xender:-");
	scanf("%c",&name);
	
	if(name=='m'){
		printf("your xender is:- %c",name);
			printf("\nenter your age:-");
			scanf("%d",&num);
		if(num>=21){
			printf("\nyour age is:- %d",num);
		}
		else{
			printf("\nyou are not capable for voating");
		}
	}
	else if(name=='f'){
		printf("your xender is:- %c",name);
		printf("\nenter your age:-");
			scanf("%d",&num);
		if(num==18){
			printf("\nyour age is:- %d",num);
		}
		else{
			printf("\nyou are not capable for voating");
		}
	}
	
	else{
		printf("please enter your correct xender");
		
	}
		return 0;
}
