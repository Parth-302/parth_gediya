#include<stdio.h>

int main(){
	int i,n;
	int arr[100];
	
	printf("please select size of array :-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("array[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\narray[%d]",arr[i]);
	}
	return 0;
}
