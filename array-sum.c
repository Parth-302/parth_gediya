#include<stdio.h>

int main(){
	
	int i,n;
	float a[100],sum=0;
	printf("please enter the numbers:-");
	scanf("%d",&n);
    printf("enter the data:-");
	
	for(i=0;i<n;i++){
			printf("\nenter a[%d]=",i);
			scanf("%f",&a[i]);
		sum=sum+a[i];	
		}
		
		printf("\nsum:%f",sum);
	return 0;	
}


