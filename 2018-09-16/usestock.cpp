#include <iostream>
#include "stock10.h"

int mian() {
  {
    using std::cout;
    cout << "Using constructors to create new objects\n";
    Stock stock1("NameSmart", 12, 20.0);
    stock1.show();

    Stock stock2 = Stock("Boffo objects", 2 ,2.0);
    stock2.show();
  }

  return 0;
}