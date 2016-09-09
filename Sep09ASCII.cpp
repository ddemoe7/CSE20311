#include <iostream>
using namespace std;

int main(){
  char x;
//this prints out chars
  for (x = 'a'; x<='z'; x++){
    cout << x;
  }
  cout << endl;

//this assigns integer to ascii value
  for (x = 99; x <=115; x++) {
    cout << x;
  }
  cout << endl;


  cout << (char) 70 << endl;
  //old way of typecasting (this shows integer 70's char value: F)
  cout << static_cast<char>(87) << endl;
  return 0 ;
}
