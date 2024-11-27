#include<stdio.h>

struct parth{
	int num;
}x1;

int main(){
	
	int i;
	
	printf("please enter the num for struct:-");
	scanf("%d",&x1.num);
	
	
	for(i=0;i<=x1.num;i++){
		printf("\nhello world");
	}
	
	return 0;
	
}
