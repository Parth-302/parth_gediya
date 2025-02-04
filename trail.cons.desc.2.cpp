#include<iostream>

using namespace std;

class Cars{
	
	public:
		~Cars(){
			cout<<"\nThis is BMW";
		}
		
		int car(){
			cout<<"\nThis is MUSTANG SHELBY";
		}
		Cars(){
			cout<<"This is FORTUNER";
		}
};

int main(){
	Cars c1;
	
	c1.car();
	
	return 0;
}
