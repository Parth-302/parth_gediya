#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "THIS IS SAME CLASS AS PARENT CLASS.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "THIS IS ANOTHER CLASS." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}
