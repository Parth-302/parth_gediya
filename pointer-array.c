#include<stdio.h>

int main(){
	int num[5]={1,22,333,4444,55555};
	
	int *p=&num;
	int i;
	
	printf("\narray is %d",num[4]);
	
	for(i=0;i<5;i++){
		printf("\n%d",p[i]);
	}
	printf("\naddres of array is:-%p",p);
	
	return 0;
}
