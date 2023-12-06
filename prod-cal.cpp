#include <iostream>
using namespace std;

class A {
protected:
  int a;

public:
  void set_A() {
    cout << "Enter a value of A: " << endl;
    cin >> a;
  }
  void disp_A() {
    cout << endl << "Value of A = " << a;
  }
};

class B : public A {
private:
  int b, p;

public:
  void set_B() {
    set_A();
    cout << "Enter the value of B: " << endl;
    cin >> b;
  }
  void disp_B() {
    disp_A();
    cout << endl << "Value of B = " << b;
  }
  void cal_prod() {
    p = a * b;
    cout << "The product of " << a << " and " << b << " = " << p;
  }
};

int main() {
  B b;
  b.set_B();
  b.cal_prod();

  return 0;
}