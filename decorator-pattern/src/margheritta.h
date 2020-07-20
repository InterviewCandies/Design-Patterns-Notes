#pragma once 
#include "pizza.h"
class Margheritta : public Pizza {
  public:
    std::string GetDescription() {
      return "Margheritta";
    }
    int GetCost() {
      return 300;
    }
};