#include<stdio.h>

int main(){
	
	
	int i,j,k,rows;
	
	printf("please enter number :-");
	scanf("%d",&rows);
   
   for(i=0; i<rows; i++){
   	for(j=0; j<rows-i-1; j++){
   		printf(" ");
	   }
	   for(k=0; k<=i; k++){
	   	printf("*");
	   }
	   printf("\n");
   }
   for(i=rows-2; i>=0 ;i--){
   	for(j=0; j<rows-i-1; j++){
   		printf(" ");
	   }
	   for(k=0; k<=i; k++){
	   	printf("*");
	   }
	   printf("\n");
   }
    return 0;
}