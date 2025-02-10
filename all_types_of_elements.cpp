#include<iostream>
#include<string>

using namespace std;

class car{
	public:
		int func1(int age){
			cout<<"THE AGE IS 20";
		}
		func2(char name){
			name = 'p';
			cout<<"\nNAME IS P";
		}
		int func3(){
			cout<<"\nTHIS IS C++";
		}
		func4(){
			cout<<"\nTHIS IS EASY THAN C";
		}
};

int main(){
	int num;
	string cars[5]={"VOLVO","BMW","AUDI","DODGE SRT","FORD MUSTANG"};
	car bmw;
	bmw.func1(0);
	bmw.func2('v');
	bmw.func3();
	bmw.func4();
	
	struct{
		int mynum;
		string mystring;
	}mystructer;
	
	mystructer.mynum=1000;
	mystructer.mystring="HELLO MY NAME IS PARTH GEDIYA";
	
	cout<<"\n"<<mystructer.mynum;
	cout<<"\n"<<mystructer.mystring;
	
	cout<<"\n"<<cars[0];
	cout<<"\n"<<cars[1];
	cout<<"\n"<<cars[2];
	cout<<"\n"<<cars[3];
	cout<<"\n"<<cars[4];
	
	cout<<"\n"<<"enter the value more than 20:-";
	cin>>num;
	
	if(num>20){
		cout<<"you are correct your value is:-"<<num;
	}
	else{
		cout<<"please check again you entered value";
	}
	
	return 0;
}
