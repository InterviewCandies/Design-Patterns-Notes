#pragma once 
#include "toping_decorator.h"
class Jalapeno : public TopingDecorator {
  public:
    Jalapeno(Pizza * pizza): TopingDecorator(pizza) {};
    std::string GetDescription() {
      return TopingDecorator::GetDescription() + ", Jalapeno";
    }
    int GetCost() {
      return TopingDecorator::GetCost() + 30;
    }
};