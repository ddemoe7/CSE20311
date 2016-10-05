#include <iostream>
using namespace std;

int addition(int a, int b); //prototype
int remainder(int, int); //both forms work for just prototyping

int main() {
  int a, b, c, r;

  cout << "enter two numbers: ";
  cin >> a >> b;

  c = addition(a, b); //function called
  r = remainder(a, b); //remainder func called

  cout << "their sum is: " << c << endl;
  cout << "the remainder of " << a << "/" << b << " is: ";
  cout << r << endl;

  return 0;
}

int addition(int a, int b) { //function
  int c;

  c = a+b;

  return c;
}

int remainder(int a, int b) {
  int r;
  r = a%b;
  return r;
}
