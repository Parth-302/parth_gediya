#include <iostream>

using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
    cout << "SAME CONTANT IN PARANT CLASS." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}
