//Paul Kwak
#include <iostream>
using namespace std;

//prototyping function
int getgcd(int, int);

int main() {
  //declaring and assigning variables
  int a, b, c;
  cout << "Enter first value: " << endl;
  cin >> a;
  cout << "Enter second value: " << endl;
  cin >> b;

  //gcd calculated
  int gcd = getgcd(a,b);
  cout << "The gcd of " << a << " and " << b << " is " << gcd << "." << endl;

}

//Using Euclid's Algorithm
//Function for Greatest Common Divisor
int getgcd(int a, int b){
  int c;
  while (a != 0) {
    c = a; a = b%a; b=c;
  }
  return b;
}
