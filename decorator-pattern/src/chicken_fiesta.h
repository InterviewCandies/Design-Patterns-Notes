#pragma once 
#include "pizza.h"
class ChickenFiesta : public Pizza {
  public:
    std::string GetDescription() {
      return "Chicken fiesta";
    }
    int GetCost() {
      return 400;
    }
};