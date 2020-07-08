#pragma once 
#include <iostream>
#include "fighter.h"
#include "lightning_kick.h"
class Ryu : public Fighter {
  public: 
    Ryu(KickStrategy * k, JumpStrategy * j) : Fighter(k, j) {
      
    };
    void Display() {
      std::cout << "I am Ryu\n";
    }
};