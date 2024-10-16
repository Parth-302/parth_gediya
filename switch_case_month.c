#include<stdio.h>

int main(){
	int month;
	
	printf("Please enter the number of month :-");
	scanf("%d",&month);
	
	switch(month){
		
		case 1:{
			printf("january");
			break;
		}
		case 2:{
			printf("febuary");
			break;
		}
		case 3:{
			printf("march");
			break;
		}
		case 4:{
			printf("april");
			break;
		}
		case 5:{
			printf("may");
			break;
		}
		case 6:{
			printf("june");
			break;
		}
		case 7:{
			printf("july");
			break;
		}
		case 8:{
			printf("august");
			break;
		}
		case 9:{
			printf("suptember");
			break;
		}
		case 10:{
			printf("octomber");
			break;
		}
		case 11:{
			printf("november");
			break;
		}
		case 12:{
			printf("december");
			break;
		}
		
		default:{
			printf("please check your input is wrong!!");
			break;
		}
		
	}
	
	
	return 0;
}
