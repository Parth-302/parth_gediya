#include<stdio.h>

int main(){
	int week,day;
	
	printf("please enter number of week:");
	scanf("%d",&week);
	printf("Please enter number of day:");
	scanf("%d",&day);
	
	switch(week){
		case 1:{
			printf("week-1");
		
			switch(day){
				case 1:{
					printf("\nmonday");
					break;
				}
				case 2:{
					printf("\ntuesday");
					break;
				}
				case 3:{
					printf("\nwednesday");
					break;
				}
				case 4:{
					printf("\nthursday");
					break;
				}
				case 5:{
					printf("\nfriday");
					break;
				}
				case 6:{
					printf("\nsaturday");
					break;
				}
				case 7:{
					printf("\nsunday");
					break;
				}
				default:{
					printf("please check your input");
					break;
				}
			}
			break;
		}
		case 2:{
			printf("week-2");
		switch(day){
				case 1:{
					printf("\nmonday");
					break;
				}
				case 2:{
					printf("\ntuesday");
					break;
				}
				case 3:{
					printf("\nwednesday");
					break;
				}
				case 4:{
					printf("\nthursday");
					break;
				}
				case 5:{
					printf("\nfriday");
					break;
				}
				case 6:{
					printf("\nsaturday");
					break;
				}
				case 7:{
					printf("\nsunday");
					break;
				}
				default:{
					printf("please check your input");
					break;
				}
			}
			break;
		}
		case 3:{
			printf("week-3");
			switch(day){
				case 1:{
					printf("\nmonday");
					break;
				}
				case 2:{
					printf("\ntuesday");
					break;
				}
				case 3:{
					printf("\nwednesday");
					break;
				}
				case 4:{
					printf("\nthursday");
					break;
				}
				case 5:{
					printf("\nfriday");
					break;
				}
				case 6:{
					printf("\nsaturday");
					break;
				}
				case 7:{
					printf("\nsunday");
					break;
				}
				default:{
					printf("please check your input");
					break;
				}
			}
			break;
			
		}
		case 4:{
			printf("week-4");switch(day){
				case 1:{
					printf("\nmonday");
					break;
				}
				case 2:{
					printf("\ntuesday");
					break;
				}
				case 3:{
					printf("\nwednesday");
					break;
				}
				case 4:{
					printf("\nthursday");
					break;
				}
				case 5:{
					printf("\nfriday");
					break;
				}
				case 6:{
					printf("\nsaturday");
					break;
				}
				case 7:{
					printf("\nsunday");
					break;
				}
				default:{
					printf("please check your input");
					break;
				}
			}
			break;
			
		}
		default:{
			printf("Wrong input please check it again!!");
			break;
		}	
	}
	return 0;
}
