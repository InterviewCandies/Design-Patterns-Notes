#include <iostream>
#include "government.h"

int main() {
  auto government = Government::GetInstance();
  government->Display();
  return 0;
}