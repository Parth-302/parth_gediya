#include<iostream>

using namespace std;

class car{
	
	public:
		
	int func1(int age){
		
		cout<<"the age is 10";
	}
	
	func2(char name){
		
		name = 'p';
		
		cout<<"\nThe name is p";
	}
	
	int func3(){
		
		cout<<"\nthis is simple c++";
	}
	
	func4(){
		cout<<"\nthis is much easy than c";
	}
};

int main(){
	
	car ford;
	
	ford.func1(0);
	
	ford.func2('z');
	
	ford.func3();
	
	ford.func4();
	
	return 0;
}
