#include<stdio.h>
#include<stdlib.h>


int main(){

int *p;
	int i,n;
	
	printf("Enter the size :");
	scanf("%d",&n);
	printf("please enter the values for array :\n");
	p = (int*) calloc(n , sizeof(int));
	
	for(i = 0; i < n; i++){
		
		printf("enter [%d] :",i);
		scanf("%d",&p[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("The value of  [%d] is:",i);
		printf("%d\n",p[i]);

	}
	free(p);
}
