#include<stdio.h>

int main(){
	int month,week,day;
	
	
	printf("Please eter number of month");
	scanf("%d",&month);
	printf("Please enter number of week :");
	scanf("%d",&week);
	printf("Please enter number of day :");
	scanf("%d",&day);
	
	switch(month){
		case 1:{
			printf("january");
			switch(week){
				case 1:{
					printf("week-1");
					switch(day){
						case 1:{
							printf("monday");
							break;
						}
						case 2:{
							printf("tuesday");
							break;
						}
						case 3:{
							printf("wednesday");
							break;
						}
						case 4:{
							printf("thursday");
							break;
						}
						case 5:{
							printf("frifday");
							break;
						}
						case 6:{
							printf("saturday");
							break;
						}
						case 7:{
							printf("sunday");
							break;
						}
					}
					break;
				}
			
			case 2:{
				printf("week-2");
				switch(day){
						case 1:{
							printf("monday");
							break;
						}
						case 2:{
							printf("tuesday");
							break;
						}
						case 3:{
							printf("wednesday");
							break;
						}
						case 4:{
							printf("thursday");
							break;
						}
						case 5:{
							printf("frifday");
							break;
						}
						case 6:{
							printf("saturday");
							break;
						}
						case 7:{
							printf("sunday");
							break;
						}
					}
					break;
				}

				case 3:{
					printf("week-3");
					switch(day){
						case 1:{
							printf("monday");
							break;
						}
						case 2:{
							printf("tuesday");
							break;
						}
						case 3:{
							printf("wednesday");
							break;
						}
						case 4:{
							printf("thursday");
							break;
						}
						case 5:{
							printf("frifday");
							break;
						}
						case 6:{
							printf("saturday");
							break;
						}
						case 7:{
							printf("sunday");
							break;
						}
					}
					break;
				}
                 case 4:{
                 	printf("week-4");
                 	switch(day){
						case 1:{
							printf("monday");
							break;
						}
						case 2:{
							printf("tuesday");
							break;
						}
						case 3:{
							printf("wednesday");
							break;
						}
						case 4:{
							printf("thursday");
							break;
						}
						case 5:{
							printf("frifday");
							break;
						}
						case 6:{
							printf("saturday");
							break;
						}
						case 7:{
							printf("sunday");
							break;
						}
					}
							break;
					}
					
					default:{
						printf("No Week");
						break;
					}
				
			
				 }
				 
			break;	
		}
		
			default:{
					printf("please check you entered input");
					break;
				}
	}
	
			 return 0;


}
