#include<stdio.h>

int main(){
	
	int day;
	
	printf("Enter the day of number :");
	scanf("%d",&day);
	
	switch(day){
		case 1:{   
		        printf("sunday");
			    break;
			}
	    case 2:{   
		    printf("monday");
	    	break;
		    }
	    case 3:{
	    	printf("tuesday");
			break;
		}
		case 4:{
			
			printf("wednesday");
			break;
		}
		case 5:{
			
			printf("thursday");
			break;
		}
		case 6:{
			printf("friday");
			break;
		}
		case 7:{
			printf("saturday");
			break;
		}
		default:{
			printf("wrong input please check it again!!");
			break;
		}
		
    }
	   return 0;	    
}


