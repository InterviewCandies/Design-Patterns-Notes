#pragma once 
#include "toping_decorator.h"
class Paneer : public TopingDecorator {
  public:
    Paneer(Pizza * pizza) : TopingDecorator(pizza){};
    std::string GetDescription() {
      return TopingDecorator::GetDescription() + ", Paneer";
    }
    int GetCost() {
      return TopingDecorator::GetCost() + 20;
    }
};