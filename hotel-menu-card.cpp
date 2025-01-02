#include<iostream>

using namespace std;

int main(){
	int item,quantity,pizza_item,pizza_size,burger_item,sandwich_item,coffee_item,milkshake_item;
	
	cout<<"WELCOME";
	cout<<"\nPLEASE SELECT A FOOD";
	cout<<"\n1.pizza\n2.burger\n3.sandwich\n4.coffee\n5.milkshek";
	cout<<"\nplease select items:-";
	cin>>item;
	
	if(item==1){
		cout<<"!!selected pizza!!";
		cout<<"\n1.margerita\n2.farmhouse\n3.seven chesse\n4.veg chesse pizza\n5.Pepperoni pizza";
		cout<<"\nplease select which pizza you want:-";
		cin>>pizza_item;
		
		if(pizza_item==1){
			cout<<"!selected margerita!";
			cout<<"\n1.small size\n2.medium size\n3.large size\n4.extra large size";
			cout<<"\nplease select a size:-";
			cin>>pizza_size;
			cout<<"please select how many you want:-";
			cin>>quantity;
		}
		if(pizza_size==1){
			cout<<"your payable amount is:-"<<quantity*49;
		}
		else if(pizza_size==2){
			cout<<"your payable amount is:-"<<quantity*99;
		}
		else if(pizza_size==3){
			cout<<"your payable amount is:-"<<quantity*199;
		}
		else if(pizza_size==4){
			cout<<"your payable amount is:-"<<quantity*299;
		}
	
		if(pizza_item==2){
			cout<<"!selected farm house!";
			cout<<"\n1.small size\n2.medium size\n3.large size\n4.extra large size";
			cout<<"please select a size:-";
			cin>>pizza_size;
			cout<<"please select how many you want:-";
			cin>>quantity;
		}
		if(pizza_size==1){
			cout<<"your payable amount is:-"<<quantity*49;
		}
		else if(pizza_size==2){
			cout<<"your payable amount is:-"<<quantity*199;
		}
		else if(pizza_size==3){
			cout<<"your payable amount is:-"<<quantity*299;
		}
		else if(pizza_size==4){
			cout<<"your payable amount is:-"<<quantity*399;
		}
		
		if(pizza_item==3){
			cout<<"!selected seven chesse!";
			cout<<"\n1.small size\n2.medium size\n3.large size\n4.extra large size";
			cout<<"\nplease select a size:-";
			cin>>pizza_size;
			cout<<"please select how many you want:-";
			cin>>quantity;
		}
		if(pizza_size==1){
			cout<<"your payable amount is:-"<<quantity*99;
		}
		else if(pizza_size==2){
			cout<<"your payable amount is:-"<<quantity*199;
		}
		else if(pizza_size==3){
			cout<<"your payable amount is:-"<<quantity*299;
		}
		else if(pizza_size==4){
			cout<<"your payable amount is:-"<<quantity*399;
		}
		if(pizza_item==4){
			cout<<"!selected veg chesse pizza!";
			cout<<"\n1.small size\n2.medium size\n3.large size\n4.extra large size";
			cout<<"\nplease select a size:-";
			cin>>pizza_size;
			cout<<"please select how many you want:-";
			cin>>quantity;
		}
		if(pizza_size==1){
			cout<<"your payable amount is:-"<<quantity*49;
		}
		else if(pizza_size==2){
			cout<<"your payable amount is:-"<<quantity*99;
		}
		else if(pizza_size==3){
			cout<<"your payable amount is:-"<<quantity*199;
		}
		else if(pizza_size==4){
			cout<<"your payable amount is:-"<<quantity*299;
		}
		if(pizza_item==5){
			cout<<"!selected Pepperoni pizza!";
			cout<<"\n1.small size\n2.medium size\n3.large size\n4.extra large size";
			cout<<"\nplease select a size:-";
			cin>>pizza_size;
			cout<<"please select how many you want:-";
			cin>>quantity;
		}
		if(pizza_size==1){
			cout<<"\nselected Pepperoni pizza small size";
			cout<<"\nyour payable amount is:-"<<quantity*49;
		}
		else if(pizza_size==2){
			cout<<"\nselected Pepperoni pizza medium size";
			cout<<"\nyour payable amount is:-"<<quantity*99;
		}
		else if(pizza_size==3){
			cout<<"\nselected Pepperoni pizza large size";
			cout<<"\nyour payable amount is:-"<<quantity*199;
		}
		else if(pizza_size==4){
			cout<<"\nselecedt Pepperoni pizza extra large size";
			cout<<"\nyour payable amount is:-"<<quantity*299;
		}
		else{
			cout<<"!!!wrong input please check again!!!";
		}
	}
	else if(item==2){
		cout<<"!!selected burger!!";
		cout<<"\n1.Chicken burger\n2.Veggie burger\n3.Turkey burger\n4.Falafel burgers\n5.Mushroom burger";
		cout<<"\nplease select which burger you want:-";
		cin>>burger_item;
		cout<<"please select how many you wnat:-";
		cin>>quantity;
		if(burger_item==1){
			cout<<"\nselected Chicken burger";
			cout<<"\nyour payable amount is:-"<<quantity*99;
		}
		else if(burger_item==2){
			cout<<"\nselected Veggie burger";
			cout<<"\nyour payable amount is:-"<<quantity*199;
		}
		else if(burger_item==3){
			cout<<"\nselected Turkey burger";
			cout<<"\nyour payable amount is:-"<<quantity*299;
		}
		else if(burger_item==4){
			cout<<"\nselected Falafel burgers";
			cout<<"\nyour payable amount is:-"<<quantity*399;
		}
		else if(burger_item==5){
			cout<<"\nselected Mushroom burger";
			cout<<"\nyour payable amount is:-"<<quantity*499;
		}
		else{
			cout<<"!!!wrong input please check again!!!";
		}
	}
	else if(item==3){
		cout<<"!!selected sandwich!!";
		cout<<"\n1.Chicken sandwich\n2.Club sandwich\n3.Pinwheel sandwiches\n4.Cuban sandwich\n5.Grilled cheese";
		cout<<"please select which sandwich you want:-";
		cin>>sandwich_item;
		cout<<"please select how many you wnat:-";
		cin>>quantity;
		if(sandwich_item==1){
			cout<<"\nselected Chicken sandwich";
			cout<<"\nyour payable amount is:-"<<quantity*99;
		}
		else if(sandwich_item==2){
			cout<<"\nselected Club sandwich";
			cout<<"\nyour payable amount is:-"<<quantity*199;
		}
		else if(sandwich_item==3){
			cout<<"\nselected Pinwheel sandwiches";
			cout<<"\nyour payable amount is:-"<<quantity*299;
		}
		else if(sandwich_item==4){
			cout<<"\nselected Cuban sandwich";
			cout<<"\nyour payable amount is:-"<<quantity*399;
		}
		else if(sandwich_item==5){
			cout<<"\nselected Grilled cheese";
			cout<<"\nyour payable amount is:-"<<quantity*499;
		}
		else{
			cout<<"!!!wrong input please check again!!!";
		}
	}
	 else if(item==4){
		cout<<"!!selected coffee!!";
		cout<<"\n1.Cappuccino\n2.Latte\n3.Americano\n4.Espresso\n5.Affogato";
		cout<<"\nplease select which coffee you want:-";
		cin>>coffee_item;
		cout<<"\nplease select how many you want:-";
		cin>>quantity;
		if(coffee_item==1){
			cout<<"\n!!selected Cappuccino!!";
			cout<<"\nyour payable amout is:-"<<quantity*199;
		}
		else if(coffee_item==2){
			cout<<"\n!!selected Latte!!";
			cout<<"\nyour payable amout is:-"<<quantity*299;
		}
		else if(coffee_item==3){
			cout<<"\n!!selected Americano!!";
			cout<<"\nyour payable amount is:-"<<quantity*399;
		}
		else if(coffee_item==4){
			cout<<"\n!!selected Espresso";
			cout<<"\nyour payable amount is:-"<<quantity*499;
		}
		else if(coffee_item==5){
			cout<<"\n!!selected Affogato!!";
			cout<<"\nyour payable amount is:-"<<quantity*599;
		}
		else{
			cout<<"!!!wrong input please check again!!!";
		}
	}
	else if(item==5){
		cout<<"!!selected milkshake!!";
		cout<<"\n1.Vanilla special\n2.Cool mint\n3.Strawberry marshallow\n4.Blueberry cheesecake\n5.Raspberry and white chocolate";
		cout<<"\nplease select which milkshake you want:-";
		cin>>milkshake_item;
		cout<<"\nplease select how many you want:-";
		cin>>quantity;
		if(milkshake_item==1){
			cout<<"\n!!selected Vanilla special!!";
			cout<<"\nyour payable amount is:-"<<quantity*299;
		}
		else if(milkshake_item==2){
			cout<<"\n!!selected Cool mint!!";
			cout<<"\nyour payable amount is:-"<<quantity*399;
		}
		else if(milkshake_item==3){
			cout<<"\n!!selected Strawberry marshallow!!";
			cout<<"\nyour payable amount is:-"<<quantity*499;
		}
		else if(milkshake_item==4){
			cout<<"\n!!selected Blueberry cheesecake!!";
			cout<<"\nyour payable amount is:-"<<quantity*599;
		}
		else if(milkshake_item==5){
			cout<<"\n!!selected Raspberry and white chocolate!!";
			cout<<"\nyour payable amount is:-"<<quantity*699;
		}
		else{
			cout<<"!!!wrong input please check again!!!";
		}
	}
	return 0;
}
