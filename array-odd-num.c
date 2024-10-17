#include<stdio.h>

int main(){
	int i,n;
	int arr[100];
	
	printf("please enter a number less than 100 :-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("array[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\narray[%d]",arr[i]);
	}
	
	for(i=1;i<n;i+=2){
		printf("\n%d",i);
	}
	return 0;
}
