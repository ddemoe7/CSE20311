#include <iostream>
using namespace std;

int main(){

int a=1;
int x=(a=3);
cout << x << endl;
//x = 3

//v.s. bool expression of ==

int n = 3;
int y = (n==3);
cout << y << endl;
//since bool values are 1 = true, and 0 = false
//x will display 1

int m = 1; //or any value not 3
int z = (m==3);
cout << z << endl;
//since bool values is false, z is 0
}
