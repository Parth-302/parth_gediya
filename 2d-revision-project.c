#include<stdio.h>

int main(){
	int a[100][100],i,j,r,c,data,f=0;
	printf("PLEASE ENTER THE NUMBER OF ROW:-");
	scanf("%d",&r);
	printf("PLEASE ENTER THE NUMBER OF COLLUM :-");
	scanf("%d",&c);
	
	printf("PLEASE ENTER THE DATA:-\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("PLEASE ENTER DATA YOU SEARCH:-");
	scanf("%d",&data);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(data==a[i][j]){
				f = 1;
				printf("[%d]FOUND AT:-[%d]INDEX\n",data,i,j);
			}
		}
	}
	if(f==0){
		printf("-:PLEASE CHECK AGAIN YOU ENTERD DATA:-\n");
	}
	return 0;
}
