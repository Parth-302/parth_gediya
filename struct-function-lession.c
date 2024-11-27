#include<stdio.h>


int func1(int a){
	 a=10;
	 printf("\na=%d",a);
	return 0;
}
int func2(int b){
	b=20;
	printf("\nb=%d",b);
	return 0;
}
int func3(int a){
	a=20;
	printf("\na=%d",a);
	return 0;
}
int func4(int b){
	b=10;
	printf("\nb=%d",b);
	return 0;
}


int main(){
	
	func1(20);
	func2(10);
	func3(20);
	func4(10);
	
	return 0;
}
