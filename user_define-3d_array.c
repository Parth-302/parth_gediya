#include<stdio.h>

int main(){
	int i,j,k;
	int a[10][10][10];
	int r,c,t;
	
	printf("enter the number of row:=");
	scanf("%d",&r);
	printf("enter the nummber of collum:=");
	scanf("%d",&c);
	printf("enter the number of table:=");
	scanf("%d",&t);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<t;k++){
				printf("\narray[%d][%d][%d]",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<t;k++){
				printf("array[%d] ",a[i][j][k]);
			}
		}
		printf("\n");
	}
	return 0;
}
