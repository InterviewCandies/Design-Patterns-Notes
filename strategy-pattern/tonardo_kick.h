#pragma once 
#include <iostream>
#include "kick_strategy.h"
class TornadoKick : public KickStrategy {
  public:
    void Kick() override {
      std::cout << "I can do tonardo kick\n"; 
    }
};