#include<stdio.h>

int main(){
	char str[10];
	int i;
	
	printf("please enter the str less than 10:=");
	scanf("%c",&str);
	
	for(i=0;i<10;i++){
		printf("%c",str[i]);
		scanf("%c",&str[i]);
	}
	for(i=0;i<10;i++){
		printf("\n%c",str[i]);
	}
	return 0;
}
