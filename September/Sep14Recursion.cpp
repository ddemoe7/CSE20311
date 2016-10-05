#include <iostream>
using namespace std;

int main()
{
  int a, sum;

  cout << "enter 10 integers: ";

  sum = 0;
  cin >> a; //That solves the problem of having a before the loop
  while (a >= 0)
  {
    sum += a; //The other way of having cin >> a first, would be wrong
    cin >> a; //b/c now you need to read the sum first. 
  }

  cout << "the sum is: " << sum << endl;

  return 0 ;
}

/*int main()
{
  int a, sum;

  cout << "enter 10 integers: ";

  sum = 0;

  for (int i = 1; i <= 10; i++)
  {
    cin >> a;
    sum += a;
  }

  cout << "the sum is: " << sum << endl;

  return 0 ;
}
*/
