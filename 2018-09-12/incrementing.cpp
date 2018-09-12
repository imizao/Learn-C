#include <iostream>

using namespace std;
const int MAX = 4;

int main ()
{
  int var[MAX] = {10, 100, 200, 300};
  int *ptr;

  ptr = var;

  for (int i = 0; i < MAX; i++)
  {
    cout << "Address of val [" << i << "] = ";
    cout << ptr << endl;

    cout << "Value of val [" << i << "] =";
    cout << *ptr << endl;

    ptr++;
  }
  return 0;
}