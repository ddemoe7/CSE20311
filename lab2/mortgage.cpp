#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float b, mp, ir, ip;
  //b = balance
  //mp = monthly payment
  //ir = interest rate
  //ip = interest payment
  cout << "What's your initial borrowed amount?: " << endl;
  cin >> b;
  while (b <= 0) {
    cout << "What's your initial borrowed amount?: " << endl;
    cin >> b;
  }

  cout << "What's your agreed monthly payment?: " << endl;
  cin >> mp;
  while (mp <= 0) {
    cout << "What's your agreed monthly payment?: " << endl;
    cin >> mp;
  }

  cout << "What's your interest rate? (in percent): " << endl;
  cin >> ir;
  while (ir <=0) {
    cout << "What's your interest rate? (in percent): " << endl;
    cin >> ir;
  }

  if (((b * ir * 0.01)/12) > mp) {
    cout << "Error! The interest payment is greater than monthly payment!";
    return 0;
  }
  else {
    cout << left << setw(10) << "Month" << setw(11) << "Payment" << setw(11) << "Interest" << setw(6) << "Balance" << endl;

  }
int month_count;


  while (b >= mp) {
    ip = (b * ir * 0.01)/12;
    b = b - (mp - ip);
    month_count++;
    cout << left << setw(10) << month_count << "$" << left << setw(10) << fixed
    << setprecision(2) << mp << "$" << left << setw(10) << fixed << setprecision(2) <<
    ip << "$" << left << setw(10) << fixed << setprecision(2) << b;
    cout << endl;
  }
  // when balance is less than $500
  ip = (b * ir * 0.01)/12;
  mp = b + ip;
  b = b - (mp - ip);
  month_count++;
  cout << left << setw(10) << month_count << "$" << left << setw(10) << fixed
  << setprecision(2) << mp << "$" << left << setw(10) << fixed << setprecision(2) <<
  ip << "$" << left << setw(10) << fixed << setprecision(2) << b;
  cout << endl;

  return 0;
}
