#include<stdio.h>

int main(){
	
	int i,j,r,c,data,f=0;
	int a[100][100];
	
	printf("please enter the number of rows:-");
	scanf("%d",&r);
	printf("please enter the number of collum:-");
	scanf("%d",&c);
	
	printf("enter the data \n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the data to search:-");
	scanf("%d",&data);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(data==a[i][j]){
				f=1;
				printf("[%d]found at[%d] index\n",data,i,j);
			}
		}
		if(data==0){
			printf("please check again you enterd data to search");
		}
		return 0;
	}
	
}
