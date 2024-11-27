#include<stdio.h>

struct parth{
	int num;
}p1,p2,p3;

int main(){
	printf("\nplease enter the num of struct 01 less than 20 :-");
	scanf("%d",&p1.num);
	printf("\nPLEASE ENTER THE NUM OF STRUCT 02 less than 30 :-");
	scanf("%d",&p2.num);
	printf("\nplease enter the num of struct 03 less tahn 40 :-");
	scanf("%d",&p3.num);
	
	if(p1.num<=20){
		printf("\nyou are correct your num is:-%d",p1.num);
	}
	else{
		printf("\nsorry check again");
	}
	if(p2.num<=30){
		printf("\nyou are corect your num is:-%d",p2.num);
	}
	else{
		printf("\nsorry check again");
	}
	if(p3.num<=40){
		printf("\nyou are correct your num is:-%d",p3.num);
	}
	else{
		printf("\nsorry check again");
	}
	
	
	return 0;
}
