#include<stdio.h>
#include<string.h>

struct xyz{
	int num;
	float name;
}s1,s2;

int main(){
	
	printf("\nenter the num of structure:-");
	scanf("%d",&s1.num);
	printf("\nplease enter name of structure:-");
	scanf("%f",&s1.name);
	
	printf("\nENTER THE NUM OF STRUCTURE:-");
	scanf("%d",&s2.num); 
	printf("\nPLEASE ENTER NAME OF STRUCTER:-");
	scanf("%f",&s2.name);
	
	printf("\nyour answer is %d",s1.num);
	printf("\nyour name is [%f]",s1.name);
	
	printf("\nYOUR ANSWER IS %d",s2.num);
	printf("\nYOUR NAME IS [%f]",s2.name);
	
	return 0;
}
