#include<iostream>

using namespace std;

class A{
	protected:
		void print(){
			cout<<"\nHELLO MY NAME IS PARTH";
		}
};
class B : public A{
	public:
		void out(){
			cout<<"MY SURNAME IS GEDIYA";
			
			print();
		}
};

int main(){
	  B a1;
	  a1.out();
	  
	  return 0;
}
