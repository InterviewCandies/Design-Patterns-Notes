#pragma once 
#include "pizza.h"
class FarmHouse : Pizza {
  public:
    std::string GetDescription() {
      return "Farm house";
    }
    int GetCost() {
      return 200;
    }
};