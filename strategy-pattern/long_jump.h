#pragma once 
#include "jump_strategy.h"
#include <iostream>
class LongJump : public JumpStrategy {
  public:
    void Jump() {
      std::cout << "I can do long jump\n";
    }
};