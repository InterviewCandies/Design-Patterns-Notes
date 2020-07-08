#pragma once 
#include <iostream>
#include "Fighter.h"
class Ken : public Fighter {
  public: 
    Ken(KickStrategy * k, JumpStrategy * j) : Fighter(k, j) {

    }
    void Display() {
      std::cout << "I am Ken\n";
    }
};