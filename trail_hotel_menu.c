#include<stdio.h>

int main(){
	int item,quantity,pizza_item,pizza_size,burger_item,sandwich_item;
	
	printf("WELLCOME");
	printf("\nPlease select your food:");
	printf("\n1. Pizza\n2. Burger\n3. sandwich");
	scanf("%d",&item);
	
	if(item==1){
		printf("please select which pizza you want:");
		printf("\n1. margerita\n2. farmhouse\n3. seven chesse");
		printf("\nwhich Pizza you want:");
		scanf("%d",&pizza_item);
		
		if(pizza_item==1){
			
			printf("Selected margerita");
			printf("\nplease select size:");
			printf("\n1.small\n2.medium\n3.large\n4.extra large");
			scanf("%d",&pizza_size);
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
		    if(pizza_size==1){
				printf("your payable amount is:%d",quantity*199);
			}
			else if(pizza_size==2){
				printf("your payable amount is:%d",quantity*299);
			}
			else if(pizza_size==3){
				printf("your payable amount is:%d",quantity*399);
			}
			else if(pizza_size==4){
				printf("your payable amount is:%d",quantity*499);
			}
		}
		else if(pizza_item==2){
			
			printf("Selected farmhouse");
			printf("\nplease select size:");
			printf("\n1.small\n2.medium\n3.large\n4.extra large");
			scanf("%d",&pizza_size);
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
			if(pizza_size==1){
				printf("your payable amount is:%d",quantity*199);
			}
			else if(pizza_size==2){
				printf("your payable amount is:%d",quantity*299);
			}
			else if(pizza_size==3){
				printf("your payable amount is:%d",quantity*399);
			}
			else if(pizza_size==4){
				printf("your payable amount is:%d",quantity*499);
			}
			
			
		}
		else if(pizza_item==3){
			printf("Selected seven chesse");
			printf("\nplease select size:");
			printf("\n1.small\n2.medium\n3.large\n4.extra large");
			scanf("%d",&pizza_size);
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
			if(pizza_size==1){
				printf("your payable amount is:%d",quantity*199);
			}
			else if(pizza_size==2){
				printf("your payable amount is:%d",quantity*299);
			}
			else if(pizza_size==3){
				printf("your payable amount is:%d",quantity*399);
			}
			else if(pizza_size==4){
				printf("your payable amount is:%d",quantity*499);
			}
			
			
		}
	}
	else if(item==2){
		printf("please select which burger you want:");
		printf("\n1.veg aloo tiki\n2.chesse mutter aloo tiki\n3.double aloo tiki");
		printf("\nwhich burger you want:");
		scanf("%d",&burger_item);
		
		if(burger_item==1){
			printf("selected veg aloo tiki");
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
			printf("\nyour payable amount is:%d",quantity*99);
		}
		else if(burger_item==2){
			printf("selected chesse mutter aloo tiki");
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
			printf("\nyour payabl amount is:%d",quantity*299);
		}
		else if(burger_item==3){
			printf("selected double aloo tiki");
			printf("\nplease enter how many you have to order:");
			scanf("%d",&quantity);
			
			printf("\nyour payable amount is:%d",quantity*199);
		}
				
	}
	else if(item==3){
		printf("please select which sandwich you want:");
		printf("\n1.veg chesse sandwich\n2.veg chesse grill sandwich\n3.aloo mutter sandwich");
		printf("\nwhich sandwich you want:");
		scanf("%d",&sandwich_item);
		
		if(sandwich_item==1);
		printf("selecterd veg chesse sandwich");
		printf("\nplease enter how many you have to order:");
		scanf("%d",&quantity);
		
		printf("\nyour payable amount is:%d",quantity*99);
	}
	else if(sandwich_item==2){
		printf("selected veg chesse sandwich");
		printf("\nplease enter how many you have to order:");
		scanf("%d",&quantity);
		
		printf("\nyour payable amount is:%d",quantity*199);
	}
	else if(sandwich_item==3){
		printf("selected aloo mutter sandwhich");
		printf("\nplease enter how many you have to order:");
		scanf("%d",&quantity);
		
		printf("\nyour payable amount is:",quantity*299);
	}
	else{
		printf("please check which item you select");
	}
	return 0;
}

