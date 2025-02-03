#include<iostream>

using namespace std;


class Human{
	
	public:
	
	~Human(){
		
		cout<<"I am Destrutor";
	}
		
	int man(){
		
		cout<<"\nI am the man";
	}
	
		Human(){
		
		cout<<"I am Constructor";
	}
	

	
	
};

int main(){
	
	Human m1;
	
	m1.man();
	
	return 0;
}
