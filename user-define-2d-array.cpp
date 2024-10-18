#include<stdio.h>

int main(){
	
	int arr[10][20];
	int i,j,r,c;
	printf("please enter number of rows:-");
	scanf("%d",&r);
	printf("please enter nnumbers of collum:-");
	scanf("%d",&c);
	
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	 	printf("\n");
	}
	
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",arr[i][j]);
		}
	 	printf("\n");
	}
	return 0;
}   

