#include<iostream>

using namespace std;

class Elements{
	public:
		~Elements(){
			cout<<"\nI am carbondioxcide";
		}
		
		int elements(){
			cout<<"\nI am oxigen";
		}
		Elements(){
			cout<<"\nI am hydrogen";
		}
};

int main(){
	Elements m1;
	
	m1.elements();
	
	return 0;
}
