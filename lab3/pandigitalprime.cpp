/*
We shall say that an n-digit number is pandigital if it makes
use of all the digits 1 to n exactly once.
For example, 2143 is a 4-digit pandigital and is also prime.
What is the largest n-digit pandigital prime that exists?
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
Immediately I know that the answer has to be a 7-digit number, because
of the rule where if you add all the number's digits together and it's
divisible by 3, it's divisible. A 9-digit number and an 8-digit number
fails this test, while a 7-digit number passes.

So with a 7-digit number in hand, we know it's sum cannot be divisible by 3,
and that the end digit cannot be even or it's divisible by 2.
*/

// Prototype for IsPrime function.
bool IsPrime(int);

// main function is always run first in a
// C++ program.

int main()
{	//Given:   nothing.
	//Results: Accepts a number and
	//		  indicates if it is prime.

	int number;
  int i;

  for (i=1234567; i<7654321; i++)
  {
	    if (IsPrime(number))
	    {
            cout << number << " is prime." << endl;
	    }
  }
	return 0;
}

bool IsPrime(int number)
{
	int i;

	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

/*NOT DONE*/
