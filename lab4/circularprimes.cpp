/*
The number, 197, is called a circular prime because all rotations of the digits:
197, 971, and 719, are themselves prime.

There are thirteen such primes below 100:
2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?

Paul Kwak Extra Credit
*/

/*
Basically, after checking every prime, I was going to try and implement a
conditional where if the number is prime, you would start checking if it
was a circular prime by rotating the number.

You would rotate the number by typecasting it into a string, and then
shift the chars by one (Not randomly, because then it would no longer
be a circular prime).

Then it would display how many of these numbers counted by using a counter,
but I'm not sure how to account for when the circular prime has already been
covered, but it counts the number again. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  const int max = 1000;
  int i,j;
  bool primes[max];
  int counter = 0;

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
  for (i = 2; i < max-1; i++)
  {
    if (primes[i] == true)
    {
      cout << setw(4) << i << " ";
      counter = counter + 1;

      if (counter%10 == 0)
      {
        cout << endl;
      }
    }
  }
  cout << endl;
}
