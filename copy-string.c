#include<stdio.h>
#include<string.h>

int main(){
	char str[]="hello";
	char str2[]="parth";
	char str3[10];
	
	strcat(str,str2);
	strcpy(str3,str);
	
	printf("str3 is %s",str3);
	
	return 0;
}
