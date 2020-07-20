#pragma once 
#include "toping_decorator.h"
class Barbeque : public TopingDecorator {
  public:
    Barbeque(Pizza * pizza) : TopingDecorator(pizza) {};
    std::string GetDescription() {
      return TopingDecorator::GetDescription() + ", Barbeque";
    }
    int GetCost() {
      return TopingDecorator::GetCost() + 40;
    }
};