/*
Paul Kwak

Store and manage many of your fav sayings.
The program 1st asks the user for a "startup" data file:
It'll then display a menu of options for user

It must contain:
-Display all sayings currently in database
-Enter a new saying in the database
-List sayings that contain a given word (substring) entered by user
-Save all sayings in a new text file
-Quit the program
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
  //initializing txtfile
  string line; //initializing
  vector<string> sayingsArray; //initializing vector w/Array
  ifstream myfile("sayings.txt"); //reading in and opening txtfile as 'myfile' = file now object
  cout << endl;

  while(getline(myfile, line)) //getline = class from fstream
  {
    sayingsArray.push_back(line); //appends each char into string
  }

  //initializing variables
  int choice = 0;
  while (choice != 5)
  {
    cout << "What would you like to do?" << endl;
    cout << right << setw(19) << "1: Display all sayings currently in database" << endl;
    cout << right << setw(22) << "2: Enter a new saying in the database" << endl;
    cout << right << setw(25) << "3: List sayings that contain your typed word" << endl;
    cout << right << setw(19) << "4: Save all sayings in the same (? or new) text file" << endl;
    cout << right << setw(1) << "5: Quit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    if (choice == 1)
    {
      for (int i=0; i<sayingsArray.size(); i++)
      {
        cout << sayingsArray[i] << endl;
      }
    }
    cout << endl;

    if (choice == 2)
    {
      //input into vector
    }
    if (choice == 3)
    {
      //search typed word
    }
    if (choice == 4)
    {
      //save new txtfile
    }
  }
}
