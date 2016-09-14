//Paul Kwak
/*Asks the user to enter two integer values, finds, and displays, the gcd
between them. Assumed that the user will only enter integer values*/
#include <iostream>
using namespace std;

//prototyping function
int getgcd(int, int);

int main() {
  //declaring and assigning variables
  //have four to account for negative values
  int a, b, c, d;
  cout << "Enter first value: " << endl;
  cin >> a;
  c = a;
  cout << "Enter second value: " << endl;
  cin >> b;
  d = b;

  //condition for when inputs are negative or zero
  if (a < 0){
    a = -1*a;
  }
  if (b < 0){
    b = -1*b;
  }
  //if (a = 0){
  //  a =
  //}

  //gcd calculated
  int gcd = getgcd(a,b);
  cout << "The gcd of " << c << " and " << d << " is " << gcd << "." << endl;

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
