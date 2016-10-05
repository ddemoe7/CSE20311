/*
greetings shows a regular void func, just displays
greetings2 shows an argument in void, but just displays after
greetings3 shows no argument, but does take info and displays it
*/
#include <iostream>
using namespace std;

void greetings();
void greetings2(int n);

int main()
{
  greetings();
  greetings2(34);

}

void greetings()
{
  cout << "Good morning!\n";
}

void greetings2(int n)
{
  cout << "Hi number " << n << "\n";
}
