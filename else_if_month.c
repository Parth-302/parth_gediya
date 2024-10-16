#include<stdio.h>

int main(){
	int month;
	
	printf("enter the numbers between 1to12 :-");
	scanf("%d",&month);
	
	if(month==1){
		printf("january\n");
	}
	else if(month==2){
		printf("febuaray\n");
	}
	else if(month==3){
		printf("march\n");
	}
	else if(month==4){
		printf("april\n");
	}
	else if(month==5){
		printf("may\n");
	}
	else if(month==6){
		printf("june\n");
	}
	else if(month==7){
		printf("july\n");
	}
	else if(month==8){
		printf("august\n");
	}
	else if(month==9){
		printf("suptember\n");
	}
	else if(month==10){
		printf("octomber\n");
	}
	else if(month==11){
		printf("november\n");
	}
	else if(month==12){
		printf("december\n");
	}
	else{
		printf("-:please check again entered number:- ");
	}
	
	return 0;
}
