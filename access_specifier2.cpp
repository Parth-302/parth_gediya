#include<iostream>

using namespace std;

class Myclass{
	public:
		int x;
};

int main(){
	Myclass myobj;
	
	myobj.x=9999;
	
	cout << myobj.x;
	
	return 0;
}
