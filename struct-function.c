#include<stdio.h>

struct abc{
	int num;
	char name;
}s1;

int main(){
	printf("please enter your age:-");
	scanf("%d",&s1.num);
	
	
	printf("your age is%d",s1.num);  
	return 0;
}
