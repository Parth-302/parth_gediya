#include<stdio.h>

int main(){
	int j,k,l,n;
	printf("please enter number :-");
	scanf("%d",&n);
	
	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			printf(" ");
		}
		for(l=0;l<k;l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
