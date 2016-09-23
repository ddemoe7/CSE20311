//wget(url) : to get data from a url
/* Paul Kwak

Arrays: Win/loss record, WITH MORE functinos

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//prototyping functinos


//global arrays
int wins[] =
 { 6, 8, 6, 8, 5, 5, 6, 6, 8, 7, 4,
   6, 7, 7, 6, 7, 8, 6, 3, 9, 9, 10,
   8, 9, 10, 7, 9, 7, 5, 9, 10, 6, 6,
   3, 6, 7, 6, 6, 8, 7, 7, 8, 7, 9,
   8, 7, 8, 9, 9, 10, 4, 7, 7, 9, 9,
   8, 2, 7, 6, 5, 2, 5, 5, 2, 9, 7,
   9, 8, 7, 8, 10, 8, 8, 11, 10, 8, 9,
   11, 9, 7, 9, 5, 6, 7, 7, 5, 5, 8,
   12, 12, 9, 10, 10, 11, 6, 9, 8, 7, 9,
   5, 9, 5, 10, 5, 6, 9, 10, 3, 7, 6,
   8, 8, 12, 9, 8, 10 };

int losses[] =
 { 3, 1, 2, 0, 3, 4, 1, 0, 1, 0, 1,
   0, 0, 0, 2, 1, 1, 1, 1, 0, 0, 1,
   1, 1, 0, 2, 1, 1, 4, 0, 0, 2, 2,
   5, 3, 1, 2, 2, 1, 2, 2, 0, 2, 1,
   2, 2, 0, 0, 0, 0, 4, 2, 2, 0, 1,
   2, 8, 3, 4, 5, 8, 5, 5, 7, 1, 2,
   0, 2, 2, 2, 1, 2, 3, 0, 2, 3, 3,
   1, 3, 4, 2, 6, 4, 5, 5, 6, 6, 4,
   0, 1, 3, 3, 1, 1, 5, 3, 3, 6, 3,
   7, 3, 6, 3, 7, 6, 3, 3, 9, 6, 6,
   5, 5, 1, 4, 5, 3 };

int main()
{
  int q, n;

  while (q != 5) {
    cout << "What would you like to do?" << endl;
    cout << right << setw(19) << "1 for the record of a given year" << endl;
    cout << right << setw(22) << "2 for the years w/'n' losses" << endl;
    cout << right << setw(25) << "3 for the years w/'n' wins" << endl;
    cout << right << setw(19) << "4 for something else" << endl;
    cout << right << setw(8) << "5 to exit" << endl;

    cout << "Enter your choice: " << endl;
    cin >> q;

    //condition if they choose 5
    if (q==5)
    {
      cout << "Thank you!" << endl;
      return 1;
    }

    if (q==1)
    {
      cout << "Please enter the year (1900, 2015) : " << endl;
      cin >> n;
      if (n >= 2016 || n < 1900)
      {
        cout << "Invalid" << endl;
      }
      else
      {
      cout << "Wins: " << wins[n-1900] << " Losses: " << losses[n-1900] << endl;
      }
    }
/*
    if (q==2)
    {

    }

    if (q==3)
    {

    }

    if (q==4)
    {

    }
*/
  }

}
