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
		if(num>=18){
			printf("\nyour age is:- %d",num);
		}
		else{
			printf("\nsorry you are not cpable for voating");
		}
	}
	else if(name=='f'){
		printf("your xender is:- %c",name);
		printf("\nenter your age:-");
		scanf("%d",&num);
		if(num>=18){
			printf("\nyour age is:- %d",num);
		}
		else{
			printf("\nsorry you are not capable for voating");
		}
	}
	else{
		printf("\nplease check your xender");
	}
	return 0;
}
