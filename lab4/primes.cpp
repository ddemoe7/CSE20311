#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  const int max = 1000;
  int i,j;
  bool primes[max];

  //Creating Boolean array
  for (i = 0; i < max; i++)
  {
    primes[i] = 1;
  }

  //Creating subscript array
  for (i = 2; i < max-1; i++)
  {
    if (primes[i] == 1)
    {
      for (j = pow(i,2); j < max-1; j+=i)
      {
        primes[j] = 0;
      }
    }
  }

  //Displaying values that were considered false
  for (i = 0; i < max-1; i++)
  {
    if (primes[i] == true)
    {
      cout << i << " ";
    }

  }
}
/*Input: an integer n > 1

Let A be an array of Boolean values, indexed by integers 2 to n,
initially all set to true.

for i = 2, 3, 4, ..., not exceeding √n:
  if A[i] is true:
    for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n :
      A[j] == false

Output: all i such that A[i] is true.
*/
