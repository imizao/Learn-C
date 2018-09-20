#include <iostream>

using namespace std;

int main () {

  int a = 5;
  int *yyy;

  cout << "*yyy = " << *yyy << endl;

  yyy = &a;

  cout << "yyy = " << yyy << ", &a = " << &a << endl;
  cout << "*yyy = " << *yyy << endl;

  *yyy = *yyy + 1;

  cout << "Now yyy = " << yyy << "Now a = " << a << endl; 
  return 0;
}