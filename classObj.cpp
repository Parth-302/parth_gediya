#include<iostream>

using namespace std;

class Car{
	
	public:
	  char Name;
	  
	  int Change(){
	  	
	  	cout<<"This is Class Function Not Main Function";
	  	
	  	return 0;
	  }
	   
};

int main(){
	Car ford;
	
	ford.Name = 'p';
	
	ford.Change();
	
	cout<<"\n"<<ford.Name;
	
	return 0;
}
