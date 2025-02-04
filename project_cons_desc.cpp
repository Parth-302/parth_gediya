#include<iostream>

using namespace std;

class Car{
	public:
		
		string brand;
		string model;
		int year;
		Car(string x,string y,int z){
			brand = x;
			model = y;
			year  = z;
		}
};

int main(){
	Car carobj1("BMW","X5",1999);
	Car carobj2("AUDI","Q5",2025);
	Car carobj3("MUSTANG","SHELBY",1975);
	
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n";
	cout<<carobj3.brand<<" "<<carobj3.model<<" "<<carobj3.year;
	
	return 0;
}
