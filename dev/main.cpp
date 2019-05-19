#include <iostream>
#include "Host.h"


int main()
{
  Host host{};
  host.test = 5;
  std::cout << host.test;
  host.open();

  std::cout << "Hello, World!" << std::endl;
  return 0;
}