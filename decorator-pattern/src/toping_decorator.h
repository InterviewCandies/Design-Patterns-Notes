#pragma once 
#include "pizza.h"
class TopingDecorator : public Pizza {
  public:
    TopingDecorator(Pizza * pizza) : pizza_(pizza){};
    std::string GetDescription() {
      return pizza_->GetDescription();
    }
    int GetCost() {
      return pizza_->GetCost();
    }
  private:
    Pizza * pizza_;
};