#include<iostream>

using namespace std;

class A{
	public:
		int x;
		A(){};
		A(A& t){
		x=t.x;
			cout<<"calling copy construcor"<<"\n";
		}
};

int main(){
	
	A a1;
	a1.x = 500;
	cout<<"a1's x ="<<a1.x<<endl;
	
	A a2(a1);
	cout<<"a2's ="<<a2.x;
	
	return 0;
}
