#include<stdio.h>

int main(){
	int n,p = 1;
	
	printf("please enter number:-");
	scanf("%d",&n);
	
	
	while(p<=n){
		printf("\n%d",p);
		printf("enter value:-");
		scanf("%d",&n);
		p++;
	}
	return 0;
}
