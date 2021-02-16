#include <iostream>
using namespace std;

int main() {

  int age = 18;
  cout << "Enter a number:\n";
  cin >> age;

  if (age == 18)
    cout << "You are old enough to drive\n";
  else
   cout << "You are NOT old enough to drive\n";
}