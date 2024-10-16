#include<stdio.h>

int main(){
	
	char first_name[10];
	char last_name[10];
	
	printf("enter your first name\n");
	scanf("%s",&first_name);
	printf("enter your last name\n");
	scanf("%S",&last_name);
	
	printf("your first name is :- %c",first_name);
	printf("\nyour last name is :- %S",last_name);
	
	return 0;
}
