#pragma once 
#include <iostream>
#include "kick_strategy.h"
class LightningKick : public KickStrategy {
  public:
    void Kick() override {
      std::cout << "I can do lightning kick\n"; 
    }
};