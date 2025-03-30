#include<iostream>

using namespace std;

int main(){
	try{
		int age = 18;
		if(age>= 18){
			cout<<"Access granted you are old enough.";
		}
		else{
			throw 505;
		}
	}
	
	catch(...){
		cout<<"Access Denied you Are not capalbe for it!";
	}
	
	return 0;
}
