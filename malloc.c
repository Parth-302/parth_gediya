#include<stdio.h>
#include<stdlib.h>

int main(){
	malloc;
	int* p;
	int i,n;
	
	printf("please enter values for array\n");
	p=(int*) malloc(7*sizeof(int));
	
	for(i=0;i<7;i++){
		printf("enter [%d]:",i);
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<7;i++){
		printf("the vallue of[%d]is:",i);
		printf("%d\n",p[i]);
	}
	free(p);
	
	return 0;
}
