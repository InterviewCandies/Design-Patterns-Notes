#pragma once 
#include "jump_strategy.h"
#include <iostream>
class LongJump : public JumpStrategy {
  public:
    void Jump() override {
      std::cout << "I can do long jump\n";
    }
};