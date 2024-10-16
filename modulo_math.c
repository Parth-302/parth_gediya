#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("enter two number :");
	scanf("%d,%d",&a,&b);
//	
//	c=a%10;
//	
//	printf("your result is :%d%%%d=%d",a,b,c);

//a%100; //a = a%10;
// printf("value of a after= : %d\n",a%=10);

printf("Enter 2 numbers : ");
 scanf("%d,%d",&a,&b);
 
 a+=b; //a = a+b;
 printf("value of a after += : %d\n",a);
 
 a*=b; //a = a*b;
 printf("value of a after *= : %d\n",a);
 a<<=b; //a = a<<b;
 printf("value of a after <<= : %d\n",a);
 a>>=b; //a = a&b;
 printf("value of a after >>= : %d\n",a);
 
 a%=10; //a = a%10;
 printf("value of a after %%= : %d\n",a);
	
	return 0;
}
