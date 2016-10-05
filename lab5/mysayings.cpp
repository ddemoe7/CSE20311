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
  while (choice != 6)
  {
    cout << "What would you like to do?" << endl;
    cout << right << setw(19) << "1: Display all sayings currently in database" << endl;
    cout << right << setw(22) << "2: Enter a new saying in the database" << endl;
    cout << right << setw(25) << "3: List sayings that contain your typed word" << endl;
    cout << right << setw(19) << "4: Save all sayings in the same (? or new) text file" << endl;
    cout << right << setw(19) << "5: Erase an entry in the database" << endl;
    cout << right << setw(1)  << "6: Quit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    if (choice == 1) //display all current sayings
    {
      for (int i=0; i<sayingsArray.size(); i++)
      {
        cout << sayingsArray[i] << endl;
      }
    }
    cout << endl;

    if (choice == 2) //input into vector
    {
      string input2;
      cout << "Enter a new saying into the database" << endl;
      cin >> input2;
      sayingsArray.push_back(input2);
      cout << endl;

      cout << "Here's the saying!" << endl;
      for (int i=0; i<sayingsArray.size(); i++)
      {
        cout << sayingsArray[i] << endl;
      }
      cout << endl;
    }

    if (choice == 3) //search typed word
    {
      string input3;
      cout << "What word are you searching for?" << endl;
      cin >> input3;
      cout << endl;

      cout << "Here's the sayings with the word!" << endl;
      //in find func, -1 is F and 0 T, b/c char starts w/0
      for (int i=0; i<sayingsArray.size(); i++)
      {
        string temp = sayingsArray[i]; //produces 1 instance instead of multiple
        if (temp.find(input3) != -1)
        {
          cout << temp << endl;
        }
      }
      cout << endl;
    }

    if (choice == 4) //save as new txtfile
    {
      ifstream infile ("sayings.txt", ifstream::binary);
      ofstream outfile ("new.txt", ofstream::binary);

      // get size of file
      infile.seekg (0,infile.end);
      long size = infile.tellg();
      infile.seekg (0);

      // allocate memory for file content
      char* buffer = new char[size];

      // read content of infile
      infile.read (buffer,size);

      // write to outfile
      outfile.write (buffer,size);

      // release dynamically-allocated memory
      delete[] buffer;

      outfile.close();
      infile.close();
    }

    if (choice == 5) //erase an entry in database
    {

    }
  }
}
