#pragma once 
#include "toping_decorator.h"
class FreshTomato : public TopingDecorator {
  public: 
    FreshTomato(Pizza * pizza) : TopingDecorator(pizza){};
    std::string GetDescription() {
      return TopingDecorator::GetDescription() + ", Fresh Tomato";
    }
    int GetCost() {
      return TopingDecorator::GetCost() + 10;
    }
}; 