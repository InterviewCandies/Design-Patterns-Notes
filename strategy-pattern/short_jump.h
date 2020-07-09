#pragma once 
#include <iostream>
#include "jump_strategy.h"
class ShortJump : public JumpStrategy {
  public:
    void Jump() override {
      std::cout << "I can do short jump\n"; 
    }
};