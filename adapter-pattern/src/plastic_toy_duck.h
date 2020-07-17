#pragma once 
#include "toy_duck.h"
#include <iostream>
class PlasticToyDuck : public ToyDuck {
  public:
    void Squeak() {
      std::cout << "Squeak Squeak\n";
    }
};