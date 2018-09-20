#include <iostream>
using namespace std;

// 为了理解 C++ 解释有符号整数和无符号整数修饰符之间的差别

int main() 
{
  short int i;
  short unsigned int j;

  j = 50000;

  i = j;
  cout << i << " " << j;

  return 0;
}