#include <iostream>

using namespace std;

class printData {
  public:
    void print(int i) {
      cout << "整数为：" << i << endl;
    }

    void print(double i) {
      cout << "浮点数为：" << i << endl;
    }

    void print(char c[]) {
      cout << "字符串为：" << c << endl;
    }
};

int main() {
  printData pd;

  pd.print(5);
  pd.print(5200.156);

  char c[] = "hello world";
  pd.print(c);

  return 0;
}
