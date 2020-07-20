#pragma once
#include "pizza.h"
class PeppyPanner : public Pizza {
  public:
    std::string GetDescription() {
      return "Peppy panner";
    } 
    int GetCost() {
      return 100;
    }
};